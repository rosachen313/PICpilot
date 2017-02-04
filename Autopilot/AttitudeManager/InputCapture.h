/*
 * @file InputCapture.h
 * @author Chris Hajduk
 * @created March 4, 2013, 10:31 PM
 * @description This file provides the methods necessary to access the input capture
 * capabilities of the chip. In essence, it lets you get the PWM values from the 8
 * PWM capable channels that the chip has.
 */

#ifndef INPUTCAPTURE_H
#define	INPUTCAPTURE_H

#include "main.h"

/**
 * Initializes capture configuration of the PWM input channels.
 * @param initIC An 8-bit bitmask specifying which channels to enable (will enable interrupts on these)
 */
void initIC(char initIC);

/**
 * Gets the input capture value (aka PWM) of all the channels
 * @return Array containing all the channel values
 */
unsigned int* getICValues();

/**
 * Gets the input capture value of a specific value
 * @param channel number from 0-7
 * @return PWM value of the channel in ms
 */
unsigned int getICValue(unsigned char channel);

#endif
