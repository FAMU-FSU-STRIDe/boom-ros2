## Setting up MATLAB for ROS2

### 1. Install MATLAB R2023a

### 2. Install Python 3.8 or 3.9

### 3. Install Visual Studio C++ 2019

### 4. Install CMake >3.15

### 5. Run this command as administrator

```
mklink /D "C:\Program Files\MATLAB\R2023a\bin\win64\cmake" "C:\Program Files\CMake"
```

### 6. Delete `C:\Users\[user]\source` if it exists

### 7. Run `matlab\generateMsgs.m`

### 8. Right click `matlab\share` > Add to Path > Selected Folders