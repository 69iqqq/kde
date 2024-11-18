#!/bin/bash

# Toggle the visibility of the eww bar
BAR_NAME="bar"

if eww list-windows | grep -q "$BAR_NAME"; then
  # If the bar is visible, close it
  pkill eww
else
  # If the bar is not visible, open it
  eww open "$BAR_NAME"
fi
