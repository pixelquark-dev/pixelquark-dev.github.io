// Generated by Haxe 4.0.1
#ifndef INCLUDED_openfl_utils__Endian_Endian_Impl_
#define INCLUDED_openfl_utils__Endian_Endian_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,_hx_system,Endian)
HX_DECLARE_CLASS3(openfl,utils,_Endian,Endian_Impl_)

namespace openfl{
namespace utils{
namespace _Endian{


class HXCPP_CLASS_ATTRIBUTES Endian_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Endian_Impl__obj OBJ_;
		Endian_Impl__obj();

	public:
		enum { _hx_ClassId = 0x3bd39ce0 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.utils._Endian.Endian_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl.utils._Endian.Endian_Impl_"); }

		inline static hx::ObjectPtr< Endian_Impl__obj > __new() {
			hx::ObjectPtr< Endian_Impl__obj > __this = new Endian_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static hx::ObjectPtr< Endian_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			Endian_Impl__obj *__this = (Endian_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Endian_Impl__obj), false, "openfl.utils._Endian.Endian_Impl_"));
			*(void **)__this = Endian_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Endian_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Endian_Impl_",9b,07,25,91); }

		static void __boot();
		static  ::Dynamic _hx_BIG_ENDIAN;
		static  ::Dynamic _hx_LITTLE_ENDIAN;
		static  ::Dynamic fromLimeEndian( ::lime::_hx_system::Endian value);
		static ::Dynamic fromLimeEndian_dyn();

		static  ::Dynamic fromString(::String value);
		static ::Dynamic fromString_dyn();

		static  ::lime::_hx_system::Endian toLimeEndian( ::Dynamic this1);
		static ::Dynamic toLimeEndian_dyn();

		static ::String toString( ::Dynamic this1);
		static ::Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace utils
} // end namespace _Endian

#endif /* INCLUDED_openfl_utils__Endian_Endian_Impl_ */ 
