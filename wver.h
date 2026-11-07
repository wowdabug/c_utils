#ifndef WVER_H
#define WVER_H

#ifndef __STDC_VERSION__
	#ifdef __STDC__
		#define C_VERSION 1990
	#else
		#define C_VERSION 1978
	#endif
#elif __STDC_VERSION__ == 199409L
	#define C_VERSION 1994
#elif __STDC_VERSION__ == 199901L
	#define C_VERSION 1999
#elif __STDC_VERSION__ == 201112L
	#define C_VERSION 2011
#elif __STDC_VERSION__ == 201710L
	#define C_VERSION 2017
#elif __STDC_VERSION__ == 202311L
	#define C_VERSION 2023
#else
	#define C_VERSION 2029
#endif

#endif
