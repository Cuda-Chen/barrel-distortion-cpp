# Barrel Distortion Cpp
A barrel distortion example written with OpenCV C++ API.

# Why I Create This Project
OpenCV starts to deprecated its C API from 3.x. What's worse, it removes the part of C API from version 4.
Also, I used the project create by [HappyMan](https://github.com/happymanx) in my internship in Weeview.
For showing the gratitude, I created this project which is compitible with OpenCV 4.x above. What's more,
 I learn some features about OpenCV Mat structure through this project.

# Dependencies
* CMake
* OpenCV

# How to Compile and Run
If you are using UNIX-like system type these commands:
```
$ mkdir build
$ cd build
$ cmake ..
$ make
$ cd ..
$ ./barrel_distort_cpp <input image path> <K: coefficient of barrel distortion> [x corrdinate of center of distortion (in pixel)] [y corrdinate of center of distortion (in pixel)]
```

# Reference
The work of barrel distortion is originated from 逍遙文工作室. <br>
You can find his work in the following link (Chinese website):
* https://cg2010studio.com/2012/01/03/opencv-%E6%A8%A1%E6%93%AC%E9%AD%9A%E7%9C%BC%E9%8F%A1%E9%A0%AD-simulate-fisheye-lens/
