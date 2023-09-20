#!/bin/bash
pid_max=$(cat /proc/sys/kernel/pid_max )
echo "maximum pid value: $pid_max"
