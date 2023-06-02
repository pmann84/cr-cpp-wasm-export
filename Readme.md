# cr-cpp-wasm-export

## Overview
This repository serves as the example code for the blog post [here](https://constreference.wordpress.com/2023/06/02/setup-clion-and-emscripten/). 

It gives an overview on how one might setup CLion to use Emscripten and export classes to use in the browser.

## Getting Started
Open the project in CLion and setup the toolchain as per the instructions in [this](https://constreference.wordpress.com/2023/06/02/setup-clion-and-emscripten/) blogpost.

## Running the example in the Browser
You need to copy the two files:
- lib.js
- lib.wasm
from the build directory to the `browser` directory. Then you should use something to serve up the html and exported files like [Live Server](https://marketplace.visualstudio.com/items?itemName=ritwickdey.LiveServer).
