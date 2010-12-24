/* @(#)dat.c	1.1 10/10/02 Copyright 2006-200 J. Schilling */
/*
 *	Global data
 *
 *	Copyright (c) 2006-2010 J. Schilling
 */
/*
 * The contents of this file are subject to the terms of the
 * Common Development and Distribution License, Version 1.0 only
 * (the "License").  You may not use this file except in compliance
 * with the License.
 *
 * See the file CDDL.Schily.txt in this distribution for details.
 *
 * When distributing Covered Code, include this CDDL HEADER in each
 * file and include the License file CDDL.Schily.txt from this distribution.
 */

#include <schily/mconfig.h>
#include <schily/unistd.h>	/* STDIN_FILENO */

#include <stdio.h>

int	__in__	= STDIN_FILENO;
int	__out__	= STDOUT_FILENO;
int	__err__	= STDERR_FILENO;

FILE	*gstd[3];
char    **evarray;

int	delim;
int	ctlc;
int	ex_status;
int	ttyflg = 1;
int	prflg = 1;
int	prompt;
char	*prompts[2] = { "prompt1 > ", "prompt2 > " };
char	*inithome = ".";