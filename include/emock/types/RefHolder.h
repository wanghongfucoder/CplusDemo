/***
   emock is a cross-platform easy-to-use C++ Mock Framework based on mockcpp.
   Copyright [2017] [ez8.co] [orca <orca.zhang@yahoo.com>]

   This library is released under the Apache License, Version 2.0.
   Please see LICENSE file or visit https://github.com/ez8-co/emock for details.
   
   mockcpp is a C/C++ mock framework.
   Copyright [2008] [Darwin Yuan <darwin.yuan@gmail.com>]

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
***/

#ifndef __MOCKPP_REFHOLDER_H
#define __MOCKPP_REFHOLDER_H

#include <emock/types/Holder.h>
#include <stdarg.h>

EMOCK_NS_START

template<typename ValueType>
struct RefHolder : public Holder<ValueType>
{
    RefHolder(const ValueType& value)
      : ref(value)
    {
    }

    PlaceHolder * clone() const
    { return new RefHolder(ref); }

    const ValueType& getValue() const
    {
      return ref;
    }

    void changeValue(const ValueType& val)
    {
      *(ValueType*)&const_cast<ValueType&>(ref) = val;
    }

private:

    const ValueType& ref;
};

#ifdef __GNUC__
struct RefVaList : public PlaceHolder
{
    RefVaList() {}

    PlaceHolder * clone() const
    {
      RefVaList* p = new RefVaList();
      p->changeValue(const_cast<RefVaList*>(this)->v);
      return p;
    }

    void changeValue(va_list val)
    {
      va_copy(v, val);
    }

    void* toVoidPtr()
    {
      union {
        void *ptr;
        va_list al;
      } u;
      va_copy(u.al, v);
      return u.ptr;
    }

    virtual const std::type_info & type() const
    {
      return typeid(va_list);
    }
    std::string toString() const
    {
       return EMOCK_NS::toString(const_cast<RefVaList*>(this)->toVoidPtr());
    }
    std::string toTypeString() const
    {
       return TypeString<va_list>::value();
    }
    std::string toTypeAndValueString() const
    {
       return EMOCK_NS::toTypeAndValueString(const_cast<RefVaList*>(this)->toVoidPtr());
    }
    virtual Constraint* getConstraint() const
    {
      return any();
    }

private:
    va_list v;
};
#endif

EMOCK_NS_END


#endif // __MOCKPP_REFHOLDER_H


