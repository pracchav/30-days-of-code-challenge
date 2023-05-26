#!/usr/bin/bash

ls
ls -s
mkdir sam
cd sam
touch sam1{1..100}.txt
cd 
ls -l sam/*.txt
