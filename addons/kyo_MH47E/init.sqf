_heli = _this select 0
_amount = 0

#mainloop
~0.0001
?!(alive _heli): exit
;;blade pitch system
?!(isengineon _heli): goto "bladesengoff"
_amount = _amount + 0.0025
?(_amount > 1): _amount = 1; goto "cont"
_heli animate ["fblade1_rise1",_amount]
_heli animate ["fblade1_rise2",_amount]
_heli animate ["fblade1_rise3",_amount]
_heli animate ["fblade1_rise4",_amount]
_heli animate ["fblade2_rise1",_amount]
_heli animate ["fblade2_rise2",_amount]
_heli animate ["fblade2_rise3",_amount]
_heli animate ["fblade2_rise4",_amount]
_heli animate ["fblade3_rise1",_amount]
_heli animate ["fblade3_rise2",_amount]
_heli animate ["fblade3_rise3",_amount]
_heli animate ["fblade3_rise4",_amount]
_heli animate ["rblade1_rise1",_amount]
_heli animate ["rblade1_rise2",_amount]
_heli animate ["rblade1_rise3",_amount]
_heli animate ["rblade1_rise4",_amount]
_heli animate ["rblade2_rise1",_amount]
_heli animate ["rblade2_rise2",_amount]
_heli animate ["rblade2_rise3",_amount]
_heli animate ["rblade2_rise4",_amount]
_heli animate ["rblade3_rise1",_amount]
_heli animate ["rblade3_rise2",_amount]
_heli animate ["rblade3_rise3",_amount]
_heli animate ["rblade3_rise4",_amount]
#bladesengoff
?(isengineon _heli): goto "cont"
_amount = _amount - 0.0025
?(_amount < 0): _amount = 0; goto "cont"
_heli animate ["fblade1_rise1",_amount]
_heli animate ["fblade1_rise2",_amount]
_heli animate ["fblade1_rise3",_amount]
_heli animate ["fblade1_rise4",_amount]
_heli animate ["fblade2_rise1",_amount]
_heli animate ["fblade2_rise2",_amount]
_heli animate ["fblade2_rise3",_amount]
_heli animate ["fblade2_rise4",_amount]
_heli animate ["fblade3_rise1",_amount]
_heli animate ["fblade3_rise2",_amount]
_heli animate ["fblade3_rise3",_amount]
_heli animate ["fblade3_rise4",_amount]
_heli animate ["rblade1_rise1",_amount]
_heli animate ["rblade1_rise2",_amount]
_heli animate ["rblade1_rise3",_amount]
_heli animate ["rblade1_rise4",_amount]
_heli animate ["rblade2_rise1",_amount]
_heli animate ["rblade2_rise2",_amount]
_heli animate ["rblade2_rise3",_amount]
_heli animate ["rblade2_rise4",_amount]
_heli animate ["rblade3_rise1",_amount]
_heli animate ["rblade3_rise2",_amount]
_heli animate ["rblade3_rise3",_amount]
_heli animate ["rblade3_rise4",_amount]
#cont
goto "mainloop"