// Generated by Haxe 4.0.1
#ifndef INCLUDED_lime_utils__LogLevel_LogLevel_Impl_
#define INCLUDED_lime_utils__LogLevel_LogLevel_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,utils,_LogLevel,LogLevel_Impl_)

namespace lime{
namespace utils{
namespace _LogLevel{


class HXCPP_CLASS_ATTRIBUTES LogLevel_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef LogLevel_Impl__obj OBJ_;
		LogLevel_Impl__obj();

	public:
		enum { _hx_ClassId = 0x4c2a8a4b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.utils._LogLevel.LogLevel_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.utils._LogLevel.LogLevel_Impl_"); }

		inline static hx::ObjectPtr< LogLevel_Impl__obj > __new() {
			hx::ObjectPtr< LogLevel_Impl__obj > __this = new LogLevel_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static hx::ObjectPtr< LogLevel_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			LogLevel_Impl__obj *__this = (LogLevel_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(LogLevel_Impl__obj), false, "lime.utils._LogLevel.LogLevel_Impl_"));
			*(void **)__this = LogLevel_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LogLevel_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LogLevel_Impl_",20,2b,1e,41); }

		static void __boot();
		static int NONE;
		static int ERROR;
		static int WARN;
		static int INFO;
		static int DEBUG;
		static int VERBOSE;
		static bool gt(int a,int b);
		static ::Dynamic gt_dyn();

		static bool gte(int a,int b);
		static ::Dynamic gte_dyn();

		static bool lt(int a,int b);
		static ::Dynamic lt_dyn();

		static bool lte(int a,int b);
		static ::Dynamic lte_dyn();

};

} // end namespace lime
} // end namespace utils
} // end namespace _LogLevel

#endif /* INCLUDED_lime_utils__LogLevel_LogLevel_Impl_ */ 
