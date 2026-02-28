#!/bin/bash
GREEN="\033[32m"
RED="\033[31m"
BLUE="\033[34m"
CYAN="\033[36m"
WHITE="\033[37m"
YELLOW="\033[33m"
PURPLE="\033[35m"
BOLD="\033[1m"
RESET="\033[0m"
BLACK="\033[30m"
GRAY="\033[90m"

echo -e "${BOLD}Installing iostem...${RESET}"

# Check if an old version of brokefetch exists
if [ -f "/usr/local/include/iostem" ] || [ -f "/usr/local/include/iostem.hpp" ]; then
	echo "An existing 'iostem' header was found at /usr/local/include/iostem."
	echo "Replacing..."
fi

echo -e "Installing ${BOLD}iostem${RESET} to ${BOLD}/usr/local/include/iostem..."

sudo cp iostem.hpp iostem /usr/local/include/

# --- Step 5: Verify installation and provide success message ---
if [ -f "/usr/local/include/iostem" ] || [ -f "/usr/local/include/iostem.hpp" ]; then
    echo -e "Success! ${BOLD}iostem${RESET} is now installed."
else
    echo -e "${RED}Error code 002:${RESET} an occurred during installation."
    exit 1
fi
 
exit 0
