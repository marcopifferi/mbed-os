/*
 * Copyright:
 * ----------------------------------------------------------------
 * This confidential and proprietary software may be used only as
 * authorised by a licensing agreement from ARM Limited
 *   (C) COPYRIGHT 2013 ARM Limited
 *       ALL RIGHTS RESERVED
 * The entire notice above must be reproduced on all authorised
 * copies and copies may only be made to the extent permitted
 * by a licensing agreement from ARM Limited.
 * ----------------------------------------------------------------
 * File:     slider.c
 * Release:  Version 2.0
 * ----------------------------------------------------------------
 */

/*
 * Code implementation for bmp image (16x23).
 */

const unsigned short sliderData[] = {
	    0xFFFF,0x9CF3,0x9CF3,0x9CF3,0x9CF3,0x9CF3,0x9CF3,0x9CF3,0x9CF3,0x9CF3,0x9CF3,0x9CF3,0x9CF3,0x9CF3,0x6B4C,0xFFFF,
	    0xFFFF,0xE71B,0xD699,0xD6BA,0xD6BA,0xD6BA,0xD6BA,0xD6B9,0xD6BA,0xD6BA,0xD699,0xD6BA,0xD6BA,0xCE58,0x6B4C,0xFFFF,
	    0xFFFF,0xE6FB,0xCE78,0xD699,0xD699,0xD699,0xD699,0xD699,0xD699,0xD699,0xD699,0xD6B9,0xD699,0xC638,0x6B4C,0xFFFF,
	    0xFFFF,0xDEFB,0xCE78,0xD699,0xD699,0xD699,0xD679,0xD679,0xD679,0xD679,0xD698,0xD699,0xD699,0xC637,0x6B4C,0xFFFF,
	    0xFFFF,0xDEFB,0xCE78,0xD699,0xD699,0xD699,0xD679,0xD679,0xD679,0xD679,0xD698,0xD699,0xD699,0xC637,0x6B4C,0xFFFF,
	    0xFFFF,0xDEFB,0xCE78,0xD699,0xD699,0xD699,0xD679,0xD679,0xD679,0xD679,0xD698,0xD699,0xD699,0xC637,0x6B4C,0xFFFF,
	    0xFFFF,0xDEFB,0xCE78,0xD699,0xD699,0xD699,0xD679,0xD679,0xD679,0xD679,0xD698,0xD699,0xD699,0xC637,0x6B4C,0xFFFF,
	    0xFFFF,0xDEFB,0xCE78,0xD699,0xD699,0xD699,0x0000,0x0000,0x0000,0xD679,0xD698,0xD699,0xD699,0xC637,0x6B4C,0xFFFF,
	    0xFFFF,0xDEFB,0xCE78,0xDEDA,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xD699,0xD699,0xC637,0x6B4C,0xFFFF,
	    0xFFFF,0xDEFB,0xCE58,0xD679,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xD699,0xD699,0xC637,0x6B4C,0xFFFF,
	    0xFFFF,0xDEFB,0xCE79,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xD699,0xC637,0x6B4C,0xFFFF,
	    0xFFFF,0xE6FB,0xC637,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xD699,0xC637,0x6B4C,0xFFFF,
	    0xFFFF,0xDEFB,0xD679,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xD699,0xC637,0x6B4C,0xFFFF,
	    0xFFFF,0xDEFB,0xD679,0xDEBA,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xD699,0xD699,0xC637,0x6B4C,0xFFFF,
	    0xFFFF,0xE6FB,0xD679,0xD679,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xD6B9,0xD699,0xC638,0x6B4C,0xFFFF,
	    0xFFFF,0xE6FB,0xCE58,0xD679,0xD699,0xD698,0x0000,0x0000,0x0000,0xD698,0xD699,0xD6BA,0xD6BA,0xC638,0x6B4C,0xFFFF,
	    0xFFFF,0xE6FB,0xCE58,0xD679,0xD699,0xD698,0xD698,0xD698,0xD698,0xD698,0xCE58,0xCE79,0xD6BA,0xC638,0x6B4C,0xFFFF,
	    0xFFFF,0xDEDA,0xCE58,0xD699,0xD699,0xD699,0xD699,0xD699,0xD699,0xD699,0xD699,0xD699,0xD699,0xC618,0x6B4C,0xFFFF,
	    0xFFFF,0xE6FB,0xD679,0xD699,0xD699,0xD699,0xD699,0xD698,0xD698,0xD698,0xD679,0xD6BA,0xD6BA,0xCE59,0x6B4C,0xFFFF,
	    0xFFFF,0xDEDB,0xD679,0xD699,0xD699,0xD699,0xD699,0xD699,0xD698,0xD699,0xCE38,0xCE78,0xD699,0xCE58,0x6B4C,0xFFFF,
	    0xFFFF,0xEF3C,0xD699,0xD699,0xD699,0xD699,0xD699,0xD699,0xD699,0xD699,0xD699,0xDEDA,0xDEFB,0xCE79,0x6B4C,0xFFFF,
	    0xFFFF,0xF77D,0xEF3C,0xEF5C,0xEF5C,0xEF5C,0xEF5C,0xEF5C,0xEF5C,0xEF5C,0xEF5C,0xEF7D,0xEF7D,0xDEFB,0x6B4C,0xFFFF,
	    0xFFFF,0xDEFA,0xDEFA,0xDEFA,0xDEFA,0xDEFA,0xDEFA,0xDEFA,0xDEFA,0xDEFA,0xDEFA,0xDEFA,0xDEFA,0xDEFA,0x6B4C,0xFFFF
};