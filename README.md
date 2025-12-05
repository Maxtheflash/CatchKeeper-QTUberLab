## 📁 Project Structure

```text
CatchKeeper-QtUberLab/
│
├── CMakeLists.txt
├── main.cpp
├── mainwindow.cpp
├── mainwindow.h
├── mainwindow.ui
├── resources.qrc
└── catchkeeperbar.png
```

## ▶️ How to Build & Run

### Using Qt Creator
1. Open **CMakeLists.txt** in Qt Creator  
2. Select a Desktop Kit (MSVC, MinGW, or Clang)  
3. Configure CMake  
4. Build  
5. Run  

### Using Command Line (MinGW Example)
```sh
mkdir build
cd build
cmake ..
cmake --build .
./CatchKeeperQtUberLab.exe
```

## 🛠 Tech Stack
- **Language:** C++  
- **Framework:** Qt 6  
- **Build System:** CMake  
- **IDE:** Qt Creator  

## ✨ Features
- Qt Widgets GUI  
- Image asset loading  
- Separate UI, logic, and header structure  
- Cross-platform build support  
