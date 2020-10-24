
/*
SPDX-FileCopyrightText: 2010 Nicolas Ternisien <nicolas.ternisien@gmail.com>

SPDX-License-Identifier: LGPL-2.1-only OR LGPL-3.0-only OR LicenseRef-KDE-Accepted-LGPL
*/

#include "os_current.h"

#include "os_base.h"

#ifdef __linux__
    #include "info_linux.cpp"
#elif defined(__FreeBSD__) || defined(__DragonFly__)
    #include "info_fbsd.cpp"
#elif defined(__NetBSD__)
	#include "info_netbsd.cpp"
#elif defined(__OpenBSD__)
    #include "info_openbsd.cpp"
#else
	#include "info_generic.cpp"	/* Default for unsupported systems.... */
#endif
