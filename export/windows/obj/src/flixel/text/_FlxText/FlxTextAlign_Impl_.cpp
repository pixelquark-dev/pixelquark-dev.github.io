// Generated by Haxe 4.0.1
#include <hxcpp.h>

#ifndef INCLUDED_flixel_text__FlxText_FlxTextAlign_Impl_
#include <flixel/text/_FlxText/FlxTextAlign_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_b1c62838e0cb70a0_1132_fromOpenFL,"flixel.text._FlxText.FlxTextAlign_Impl_","fromOpenFL",0xc584ea03,"flixel.text._FlxText.FlxTextAlign_Impl_.fromOpenFL","flixel/text/FlxText.hx",1132,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_b1c62838e0cb70a0_1144_toOpenFL,"flixel.text._FlxText.FlxTextAlign_Impl_","toOpenFL",0xa34e3094,"flixel.text._FlxText.FlxTextAlign_Impl_.toOpenFL","flixel/text/FlxText.hx",1144,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_b1c62838e0cb70a0_1118_boot,"flixel.text._FlxText.FlxTextAlign_Impl_","boot",0xece2bcdb,"flixel.text._FlxText.FlxTextAlign_Impl_.boot","flixel/text/FlxText.hx",1118,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_b1c62838e0cb70a0_1125_boot,"flixel.text._FlxText.FlxTextAlign_Impl_","boot",0xece2bcdb,"flixel.text._FlxText.FlxTextAlign_Impl_.boot","flixel/text/FlxText.hx",1125,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_b1c62838e0cb70a0_1127_boot,"flixel.text._FlxText.FlxTextAlign_Impl_","boot",0xece2bcdb,"flixel.text._FlxText.FlxTextAlign_Impl_.boot","flixel/text/FlxText.hx",1127,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_b1c62838e0cb70a0_1128_boot,"flixel.text._FlxText.FlxTextAlign_Impl_","boot",0xece2bcdb,"flixel.text._FlxText.FlxTextAlign_Impl_.boot","flixel/text/FlxText.hx",1128,0xdf165a6e)
namespace flixel{
namespace text{
namespace _FlxText{

void FlxTextAlign_Impl__obj::__construct() { }

Dynamic FlxTextAlign_Impl__obj::__CreateEmpty() { return new FlxTextAlign_Impl__obj; }

void *FlxTextAlign_Impl__obj::_hx_vtable = 0;

Dynamic FlxTextAlign_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxTextAlign_Impl__obj > _hx_result = new FlxTextAlign_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxTextAlign_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3e9dd0ef;
}

::String FlxTextAlign_Impl__obj::LEFT;

::String FlxTextAlign_Impl__obj::CENTER;

::String FlxTextAlign_Impl__obj::RIGHT;

::String FlxTextAlign_Impl__obj::JUSTIFY;

::String FlxTextAlign_Impl__obj::fromOpenFL( ::Dynamic align){
            	HX_STACKFRAME(&_hx_pos_b1c62838e0cb70a0_1132_fromOpenFL)
HXDLIN(1132)		 ::Dynamic _hx_switch_0 = align;
            		if (  (_hx_switch_0==0) ){
HXLINE(1135)			return HX_("center",d5,25,db,05);
HXDLIN(1135)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==2) ){
HXLINE(1137)			return HX_("justify",50,df,b5,83);
HXDLIN(1137)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==3) ){
HXLINE(1134)			return HX_("left",07,08,b0,47);
HXDLIN(1134)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==4) ){
HXLINE(1136)			return HX_("right",dc,0b,64,e9);
HXDLIN(1136)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(1138)			return HX_("left",07,08,b0,47);
            		}
            		_hx_goto_0:;
HXLINE(1132)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxTextAlign_Impl__obj,fromOpenFL,return )

 ::Dynamic FlxTextAlign_Impl__obj::toOpenFL(::String align){
            	HX_STACKFRAME(&_hx_pos_b1c62838e0cb70a0_1144_toOpenFL)
HXDLIN(1144)		::String _hx_switch_0 = align;
            		if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ){
HXLINE(1147)			return 0;
HXDLIN(1147)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("justify",50,df,b5,83)) ){
HXLINE(1149)			return 2;
HXDLIN(1149)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("left",07,08,b0,47)) ){
HXLINE(1146)			return 3;
HXDLIN(1146)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE(1148)			return 4;
HXDLIN(1148)			goto _hx_goto_2;
            		}
            		/* default */{
HXLINE(1150)			return 3;
            		}
            		_hx_goto_2:;
HXLINE(1144)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxTextAlign_Impl__obj,toOpenFL,return )


FlxTextAlign_Impl__obj::FlxTextAlign_Impl__obj()
{
}

bool FlxTextAlign_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toOpenFL") ) { outValue = toOpenFL_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromOpenFL") ) { outValue = fromOpenFL_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *FlxTextAlign_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo FlxTextAlign_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &FlxTextAlign_Impl__obj::LEFT,HX_("LEFT",07,d0,70,32)},
	{hx::fsString,(void *) &FlxTextAlign_Impl__obj::CENTER,HX_("CENTER",d5,d1,5d,b8)},
	{hx::fsString,(void *) &FlxTextAlign_Impl__obj::RIGHT,HX_("RIGHT",bc,43,52,67)},
	{hx::fsString,(void *) &FlxTextAlign_Impl__obj::JUSTIFY,HX_("JUSTIFY",30,b3,89,03)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void FlxTextAlign_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTextAlign_Impl__obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(FlxTextAlign_Impl__obj::CENTER,"CENTER");
	HX_MARK_MEMBER_NAME(FlxTextAlign_Impl__obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(FlxTextAlign_Impl__obj::JUSTIFY,"JUSTIFY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxTextAlign_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTextAlign_Impl__obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(FlxTextAlign_Impl__obj::CENTER,"CENTER");
	HX_VISIT_MEMBER_NAME(FlxTextAlign_Impl__obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(FlxTextAlign_Impl__obj::JUSTIFY,"JUSTIFY");
};

#endif

hx::Class FlxTextAlign_Impl__obj::__mClass;

static ::String FlxTextAlign_Impl__obj_sStaticFields[] = {
	HX_("LEFT",07,d0,70,32),
	HX_("CENTER",d5,d1,5d,b8),
	HX_("RIGHT",bc,43,52,67),
	HX_("JUSTIFY",30,b3,89,03),
	HX_("fromOpenFL",9a,4c,d8,64),
	HX_("toOpenFL",6b,ef,d2,48),
	::String(null())
};

void FlxTextAlign_Impl__obj::__register()
{
	FlxTextAlign_Impl__obj _hx_dummy;
	FlxTextAlign_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("flixel.text._FlxText.FlxTextAlign_Impl_",65,e8,c9,65);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxTextAlign_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxTextAlign_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FlxTextAlign_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxTextAlign_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxTextAlign_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTextAlign_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTextAlign_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxTextAlign_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b1c62838e0cb70a0_1118_boot)
HXDLIN(1118)		LEFT = HX_("left",07,08,b0,47);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b1c62838e0cb70a0_1125_boot)
HXDLIN(1125)		CENTER = HX_("center",d5,25,db,05);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b1c62838e0cb70a0_1127_boot)
HXDLIN(1127)		RIGHT = HX_("right",dc,0b,64,e9);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b1c62838e0cb70a0_1128_boot)
HXDLIN(1128)		JUSTIFY = HX_("justify",50,df,b5,83);
            	}
}

} // end namespace flixel
} // end namespace text
} // end namespace _FlxText
