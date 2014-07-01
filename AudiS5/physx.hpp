
		thrustDelay = 0.1;
		brakeIdleSpeed = 1.78;
		maxSpeed = 330;
		fuelCapacity = 60;
		wheelCircumference = 2.277;
		antiRollbarForceCoef = 0;
		antiRollbarForceLimit = 0;
		antiRollbarSpeedMin = 0;
		antiRollbarSpeedMax = 0;
		idleRpm = 1000;
		redRpm = 7000;
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-3.231,"N",0,"D1",4.462,"D2",3.57,"D3",2.571,"D4",1.97,"D5",1.601,"D6",0.9,"D7",0.65};
			TransmissionRatios[] = {"High",4.111};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
			transmissionDelay = 0.01;
		};
		simulation = "carx";
		dampersBumpCoef = 0.01;
		differentialType = "all_limited";
		frontRearSplit = 0.3;
		frontBias = 1.5;
		rearBias = 1.5;
		centreBias = 2.5;
		clutchStrength = 577.0;
		enginePower = 245;
		maxOmega = 720;
		peakTorque = 440;
		dampingRateFullThrottle = 0.03;
		dampingRateZeroThrottleClutchEngaged = 0.35;
		dampingRateZeroThrottleClutchDisengaged = 0.05;
		torqueCurve[] = {
			{ 0.0,0.0 },
			{ 0.2,0.65 },
			{ 0.3,0.8 },
			{ 0.4,0.95 },
			{ 0.6,1.0 },
			{ 0.7,0.95 },
			{ 0.9,0.9 },
			{ 1.0,0.5 }};
		changeGearMinEffectivity[] = {0.95,0.15,0.98,0.98,0.98,0.98,0.97,0.95,0.95};
		switchTime = 0.11;
		latency = 1.0;
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = "0.2";
				mass = 20;
				MOI = 5.3;
				dampingRate = 0.5;
				maxBrakeTorque = 5000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.1;
				mMaxDroop = 0.05;
				sprungMass = 333.5;
				springStrength = 40250;
				springDamperRate = 7725;
				longitudinalStiffnessPerUnitGravity = 100000;
				latStiffX = 25;
				latStiffY = 18000;
				frictionVsSlipGraph[] = {
					{ 0,1 },
					{ 0.5,1 },
					{ 1,1 }};
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				steering = 0;
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				maxHandBrakeTorque = 4000;
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = 1;
				side = "right";
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				steering = 0;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				maxHandBrakeTorque = 4000;
			};
		};
