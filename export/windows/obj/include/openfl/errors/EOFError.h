// Generated by Haxe 4.0.1
#ifndef INCLUDED_openfl_errors_EOFError
#define INCLUDED_openfl_errors_EOFError

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_errors_IOError
#include <openfl/errors/IOError.h>
#endif
HX_DECLARE_CLASS2(openfl,errors,EOFError)
HX_DECLARE_CLASS2(openfl,errors,Error)
HX_DECLARE_CLASS2(openfl,errors,IOError)

namespace openfl{
namespace errors{


class HXCPP_CLASS_ATTRIBUTES EOFError_obj : public  ::openfl::errors::IOError_obj
{
	public:
		typedef  ::openfl::errors::IOError_obj super;
		typedef EOFError_obj OBJ_;
		EOFError_obj();

	public:
		enum { _hx_ClassId = 0x7a1dfa07 };

		void __construct(::String message,hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.errors.EOFError")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.errors.EOFError"); }
		static hx::ObjectPtr< EOFError_obj > __new(::String message,hx::Null< int >  __o_id);
		static hx::ObjectPtr< EOFError_obj > __alloc(hx::Ctx *_hx_ctx,::String message,hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EOFError_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EOFError",8c,e5,0a,43); }

};

} // end namespace openfl
} // end namespace errors

#endif /* INCLUDED_openfl_errors_EOFError */ 
