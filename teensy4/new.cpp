/* Teensyduino Core Library
 * http://www.pjrc.com/teensy/
 * Copyright (c) 2018 PJRC.COM, LLC.
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * 1. The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include <cstdlib>
#include <new>

void * operator new(size_t size)
{
	return malloc(size);
}

void * operator new[](size_t size)
{
	return malloc(size);
}

void operator delete(void * ptr)
{
	free(ptr);
}

void operator delete[](void * ptr)
{
	free(ptr);
}

void operator delete(void * ptr, size_t size __attribute__((unused)))
{
	free(ptr);
}

void operator delete[](void * ptr, size_t size __attribute__((unused)))
{
	free(ptr);
}

void * operator new(size_t size, std::align_val_t align)
{
	return aligned_alloc((size_t)align, size);
}

void * operator new[](size_t size, std::align_val_t align)
{
	return aligned_alloc((size_t)align, size);
}

void operator delete(void * ptr, std::align_val_t align __attribute__((unused)))
{
	free(ptr);
}

void operator delete[](void * ptr, std::align_val_t align __attribute__((unused)))
{
	free(ptr);
}

void operator delete(void * ptr, size_t size __attribute__((unused)), std::align_val_t align __attribute__((unused)))
{
	free(ptr);
}

void operator delete[](void * ptr, size_t size __attribute__((unused)), std::align_val_t align __attribute__((unused)))
{
	free(ptr);
}
