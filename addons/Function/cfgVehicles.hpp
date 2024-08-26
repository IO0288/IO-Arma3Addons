class CfgVehicles
{
	class Logic;
    class Module_F: Logic
    {
        class AttributesBase
        {
            class Default;
            class Edit;
            class Combo; 
            class Checkbox; 
            class CheckboxNumber; 
            class ModuleDescription; 
            class Units;
            class Slider;
        };
        // Description base classes, for more information see below
        class ModuleDescription
        {
            class AnyBrain;
        };
    };

    // Llamada a cada definición del modulo
    #include "modules\cfgVehicles_Modules.hpp"
};