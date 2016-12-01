#!/usr/bin/env python3
# -*- coding: utf-8 -*-
import subprocess

if __name__ == '__main__':
    count_list = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 16, 17, 18, 19, 20, 40, 80, 160, 320, 640, 1280]
    roop_count = 1000000

    for i in count_list:
        command = "perf stat ./a.out " + str(i) + " " + str(roop_count) + " 2>&1 | tee -a log.txt"
        try:
            subprocess.check_output(command, shell=True)
        except Exception as e:
            if type(e) != subprocess.CalledProcessError:
                print("error.")

