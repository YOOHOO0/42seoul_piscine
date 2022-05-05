#!/bin/bash

id -p $FT_USER | sed -n 2p | cut -c 8- | tr ' ' ',' | tr -d '\n'
