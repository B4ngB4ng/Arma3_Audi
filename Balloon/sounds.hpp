		attenuationEffectType = "CarAttenuation"; //utlumovani v interieru (odkaz do Attenuation.hpp ve slozce SOUNDS_F

		soundGetIn[]={"A3\Sounds_F\air\Heli_Light_02\open",db-5,1};
		soundGetOut[]={"A3\Sounds_F\air\Heli_Light_02\close",db0,1, 50};
		soundEnviron[]={"", db-30, 1.0};
		soundDammage[]={"A3\Sounds_F\air\Heli_Light_02\crash", db-5, 1};
		soundEngineOnInt[] = {"A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_int_start_v2", db-5, 1.0};
		soundEngineOnExt[] = {"A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_ext_start_v2", db-2, 1.0, 600};
		soundEngineOffInt[] =  {"A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_int_stop_v2", db-5, 1.0};
		soundEngineOffExt[] =  {"A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_ext_stop_v2", db-2, 1.0, 600};
    	soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_1", db-20, 1};
    	soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_2", db-20, 1};		

		class Sounds
		{
/*--------------------------------------------------------
					EXTERNAL SAMPLES KA60
  --------------------------------------------------------*/
			class Engine
			{
				sound[] = {"A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_ext_engine_v2", db5, 1.0, 900};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[] = {"A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_ext_rotor_normal", db3, 1.0, 1200};
				frequency = "rotorSpeed";
				volume = "camPos*(0 max (rotorSpeed-0.1))";
				cone[] = {1.6,3.14, 1.6, 0.95};
			};
			class RotorHighOut
			{
				sound[] = {"A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_ext_rotor_high", db5, 1.0, 1500};
				frequency = "rotorSpeed";
				volume = "camPos*10*(0 max (rotorThrust-0.9))" ;
				cone[] = {1.6,3.14, 1.6, 0.95};
			};
			class RotorNoiseExt			
			{
				sound[] = {"A3\Sounds_F\air\Heli_Light_02\rotor_swist", db0, 1, 800};
				frequency = 1;
				volume = "(camPos*(rotorSpeed factor [0.6, 0.85]))";
				cone[] = {0.7, 1.3, 1.0, 0}; //smerovy kuzel zvuku - a=uhel vyzarovani zvuku b=uhel fadu (hranice vnejsiho fadu) x=hlasitost v vnitrnim kuzelu  y=hlasitost na druhou stranu smeru zvuku
			};
/*--------------------------------------------------------
					INTERNAL SAMPLES KA60
  --------------------------------------------------------*/
  			class EngineIn
			{
				sound[] = {"A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_int_engine_v2", db0, 1.0};
				frequency = "rotorSpeed";
			 	volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorLowIn
			{
				sound[] = {"A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_int_rotor_normal", db2, 1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*(0 max (rotorSpeed-0.1))";
			};
			class RotorHighIn
			{
				sound[] = {"A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_int_rotor_high", db3, 1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*3*(rotorThrust-0.9)" ;
			};
/*			class RotorNoiseInt			
			{
				sound[] = {"A3\Sounds_F\air\Heli_Light_02\rotor_swist", db-30, 1};
				frequency = 1; 
				volume = "(rotorSpeed factor [0.6, 0.85])";
				cone[] = {0.7, 1.3, 1.0, 0}; //smerovy kuzel zvuku - a=uhel vyzarovani zvuku b=uhel fadu (hranice vnejsiho fadu) x=hlasitost v vnitrnim kuzelu  y=hlasitost na druhou stranu smeru zvuku
			};
*/
		};
