"""
    Imgconv - converts image data in a header file.
    Copyright (C) 2022  Mibi88

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program. If not, see https://www.gnu.org/licenses/.
"""

import sys
from imgconv_lib import *

if len(sys.argv) > 2:
	if len(sys.argv) > 3:
		prefix = sys.argv[3]
	else:
		prefix = ""
	path = sys.argv[1]
	outpath = sys.argv[2]
	for image in os.listdir(path):
		conv(image, path, outpath, prefix)
