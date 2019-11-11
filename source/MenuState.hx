package;

import flixel.FlxSprite;
import flixel.FlxState;
import flixel.ui.FlxButton;
import flixel.FlxG;

class MenuState extends FlxState
{
	var _btnPlay:FlxButton;
	var _btnConf:FlxButton;
	var _menuBg:FlxSprite;
	
	override public function create():Void
	{
		_menuBg = new FlxSprite(0, 0, 'assets/images/bg.png');
		_btnPlay = new FlxButton(0, 170, "Play", clickPlay);
		_btnConf = new FlxButton(0, 200, "Settings", clickPlay);
		
		add(_menuBg);
		add(_btnConf);
		add(_btnPlay);		
		
		_btnPlay.screenCenter(X);
		_btnConf.screenCenter(X);
		
		
		super.create();
	} 

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
	}
	
	function clickPlay():Void
	{
		FlxG.switchState(new PlayState());
	}

}