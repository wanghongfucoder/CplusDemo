/***
   emock is a cross-platform easy-to-use C++ Mock Framework based on mockcpp.
   Copyright [2017] [ez8.co] [orca <orca.zhang@yahoo.com>]

   This library is released under the Apache License, Version 2.0.
   Please see LICENSE file or visit https://github.com/ez8-co/emock for details.
   
   mockcpp is a generic C/C++ mock framework.
   Copyright (C) <2009>  <Darwin Yuan: darwin.yuan@gmail.com>

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.
***/

#ifndef __EMOCK_HPP_
#define __EMOCK_HPP_

#include <emock/emock.h>
#include <emock/ChainingMockHelper.h>

#ifdef __cplusplus

   #include <emock/ProcStub.h>
   #include <emock/ApiHookMocker.h>

   #define EMOCK(api) EMOCK_NS::mockAPI(#api, api)
   #define EMOCKX(MockerType, matcher) EMOCK_NS::mockAPI<MockerType>(matcher)

   USING_EMOCK_NS

#endif

#endif

