/*
 * Media controller test application
 *
 * Copyright (C) 2010 Ideas on board SPRL <laurent.pinchart@ideasonboard.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 */

#ifndef __OPTIONS_H
#define __OPTIONS_H

struct media_options
{
	const char *devname;
	unsigned int interactive:1,
		     print:1,
		     print_dot:1,
		     reset:1,
		     verbose:1;
	const char *entity;
	const char *formats;
	const char *links;
	const char *pad;
};

extern struct media_options media_opts;

extern int parse_cmdline(int argc, char **argv);

#endif /* __OPTIONS_H */
