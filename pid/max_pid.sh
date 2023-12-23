#!/bin/bash

# Read and print the maximum process ID value
pid_max=$(cat /proc/sys/kernel/pid_max)
echo "Maximum Process ID: $pid_max"
