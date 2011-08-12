/* RTC:HokuyoAIST
 *
 * HokuyoAIST interface implementation.
 *
 * Copyright 2010-2011 Geoffrey Biggs geoffrey.biggs@aist.go.jp
 *     RT-Synthesis Research Group
 *     Intelligent Systems Research Institute,
 *     National Institute of Advanced Industrial Science and Technology (AIST),
 *     Japan
 *     All rights reserved.
 *
 * This file is part of HokuyoAIST.
 *
 * HokuyoAIST is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation; either version 2.1 of the License,
 * or (at your option) any later version.
 *
 * HokuyoAIST is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with HokuyoAIST. If not, see
 * <http://www.gnu.org/licenses/>.
 */


#include <rtchokuyoaist/hokuyoaist_impl.h>
#include <rtchokuyoaist/rtc.h>

using namespace RTCHokuyoAist;

//////////////////////////////////////////////////////////////////////////////
// HokuyoAist provider class

HokuyoAistProvider::HokuyoAistProvider()
    : owner_(0)
{
}


HokuyoAistProvider::~HokuyoAistProvider()
{
}


void HokuyoAistProvider::request_scan()
    throw(CORBA::SystemException)
{
    owner_->request_scan();
}

