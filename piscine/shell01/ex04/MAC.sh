#!/bin/bash
ip -o link | awk '$2 != "lo:" {print $2, $(NF-2)}'
