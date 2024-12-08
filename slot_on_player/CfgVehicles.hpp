class CfgVehicles
{
    class Man;
	class SmallProtectorCase;

	class sw_case: SmallProtectorCase // созднание нового кейса на основе ванильного (не обязательно)
	{
		scope = 2;
        inventorySlot = "case_examples"; // только данный параметр является обязательным для кейса (прописать параметр name)
		displayName = "Новый кейс";
		descriptionShort = "";
		itemsCargoSize[] = {2,2};
	};

    class SurvivorBase: Man
	{
		attachments[] += {"case_examples"}; // добавить кейс на персонажа (прописать параметр name)
		
		class InventoryEquipment
		{
			playerSlots[] += {"Slot_case"}; // сюда прописать класс слота, нужно для скриптов
		};
	};
};