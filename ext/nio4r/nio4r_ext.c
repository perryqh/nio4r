/*
 * Copyright (c) 2011 Tony Arcieri. Distributed under the MIT License. See
 * LICENSE.txt for further details.
 */

#include "ruby.h"
#include "libev.h"
#include "../libev/ev.c"

void Init_nio4r_ext()
{
    Init_NIO_Selector();
    Init_NIO_Monitor();
}