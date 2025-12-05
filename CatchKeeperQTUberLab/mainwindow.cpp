#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QDate>
#include <QTime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //
    // ----------------------------------------------------------
    // DEFAULT VALUES FOR YOUR WIDGETS
    // ----------------------------------------------------------
    //

    ui->dateCatch->setDate(QDate::currentDate());
    ui->timeCatch->setTime(QTime::currentTime());
    ui->label->setText("No Catch Logged Yet...");
    ui->progressCast->setValue(0);

    //
    // ----------------------------------------------------------
    // BUTTON CLICK LOGIC
    connect(ui->pushButton, &QPushButton::clicked, this, [this]()
            {
                QString species = ui->comboSpecies->currentText();
                double weight   = ui->spinWeight->value();
                int length      = ui->spinLength->value();
                QString date    = ui->dateCatch->date().toString("MM/dd/yyyy");
                QString time    = ui->timeCatch->time().toString("hh:mm AP");
                QString weather = ui->comboWeather->currentText();
                int fightRating = ui->sliderFight->value();
                QString notes   = ui->textHistory->toPlainText();   // or your notes box
                bool isPB       = ui->checkPB->isChecked();

                QString entry;
                entry += "Species: " + species + "\n";
                entry += "Weight: " + QString::number(weight) + " lb\n";
                entry += "Length: " + QString::number(length) + " in\n";
                entry += "Date: " + date + "\n";
                entry += "Time: " + time + "\n";
                entry += "Weather: " + weather + "\n";
                entry += "Fight Rating: " + QString::number(fightRating) + "/10\n";
                entry += "Notes: " + notes + "\n";
                if (isPB) entry += "🎣 PERSONAL BEST!\n";
                entry += "----------------------------------------\n\n";

                // Update UI
                ui->label->setText("Catch Logged!");
                ui->textHistory->append(entry);
                ui->progressCast->setValue(100);
            });

}

MainWindow::~MainWindow()
{
    delete ui;
}
