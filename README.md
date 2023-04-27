# CS550
Building a distributed SQL engine

In an attempt to improve our log file generation, I focused on modifying the main.cpp file. I noticed that the existing SQL engine only allowed for static items to be inserted into the suffixes and results unordered maps, which I believe is the main cause of our limitations. To enable dynamic generation of multiple log queries using various slot argumentation, I made changes to the code structure and added comments. The goal is to allow users to enter as many suffixes and results as they need.
