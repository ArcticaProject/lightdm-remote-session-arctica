/*
 * Copyright © 2012-2013 Mike Gabriel <mike.gabriel@das-netzwerkteam.de>
 * Copyright © 2012 Canonical Ltd.
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 3, as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranties of
 * MERCHANTABILITY, SATISFACTORY QUALITY, or FITNESS FOR A PARTICULAR
 * PURPOSE.  See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Author: Mike Gabriel <mike.gabriel@das-netzwerkteam.de>
 * Author libpam-freerdp (where we forked from): Ted Gould <ted@canonical.com>
 */

#include <stdlib.h>
#include <unistd.h>

int
main (int argc, char * argv[])
{
	char * args[2];
	args[0] = PKGDATADIR "/x2go-session";
	args[1] = NULL;

	execvp(args[0], args);

	return 0;
}
