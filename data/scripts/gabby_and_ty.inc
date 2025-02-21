@ Gabby and Ty always move to the same spots for the first 5 battles
@ From the 6th battle onwards, they move randomly between locations 6-8
@ Note: The local IDs of Gabby and Ty are hard-coded in GetGabbyAndTyLocalIds
GabbyAndTy_EventScript_UpdateLocation::
	cleartrainerflag TRAINER_GABBY_AND_TY_6
	switch VAR_RESULT
	case 0, GabbyAndTy_EventScript_MoveForBattle1
	case 1, GabbyAndTy_EventScript_MoveForBattle2
	case 2, GabbyAndTy_EventScript_MoveForBattle3
	case 3, GabbyAndTy_EventScript_MoveForBattle4
	case 4, GabbyAndTy_EventScript_MoveForBattle5
	case 5, GabbyAndTy_EventScript_MoveForBattle6
	case 6, GabbyAndTy_EventScript_MoveForBattle7
	case 7, GabbyAndTy_EventScript_MoveForBattle8
	case 8, GabbyAndTy_EventScript_MoveForBattle9
	end

GabbyAndTy_EventScript_MoveForBattle1::
	call GabbyAndTy_EventScript_ShowAtRoute111_1
	return

GabbyAndTy_EventScript_MoveForBattle2::
	call GabbyAndTy_EventScript_ShowAtRoute118_1
	call GabbyAndTy_EventScript_HideAtRoute111_1
	return

GabbyAndTy_EventScript_MoveForBattle3::
	call GabbyAndTy_EventScript_ShowAtRoute120_1
	call GabbyAndTy_EventScript_HideAtRoute118_1
	return

GabbyAndTy_EventScript_MoveForBattle4::
	call GabbyAndTy_EventScript_ShowAtRoute111_3
	call GabbyAndTy_EventScript_HideAtRoute120_1
	return

GabbyAndTy_EventScript_MoveForBattle5::
	call GabbyAndTy_EventScript_ShowAtRoute118_2
	call GabbyAndTy_EventScript_HideAtRoute111_3
	return

GabbyAndTy_EventScript_MoveForBattle6::
	call GabbyAndTy_EventScript_ShowAtRoute120_2
	call GabbyAndTy_EventScript_HideAtRoute118_2
	return

GabbyAndTy_EventScript_MoveForBattle7::
	call GabbyAndTy_EventScript_ShowAtRoute111_2
	call GabbyAndTy_EventScript_HideAtRoute120_2
	return

GabbyAndTy_EventScript_MoveForBattle8::
	call GabbyAndTy_EventScript_ShowAtRoute118_3
	call GabbyAndTy_EventScript_HideAtRoute111_2
	return

GabbyAndTy_EventScript_MoveForBattle9::
	call GabbyAndTy_EventScript_ShowAtRoute120_2
	call GabbyAndTy_EventScript_HideAtRoute118_3
	return

GabbyAndTy_EventScript_HideAtRoute111_1::
	setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
	return

GabbyAndTy_EventScript_ShowAtRoute111_1::
	clearflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
	return

GabbyAndTy_EventScript_HideAtRoute118_1::
	setflag FLAG_HIDE_ROUTE_118_GABBY_AND_TY_1
	return

GabbyAndTy_EventScript_ShowAtRoute118_1::
	clearflag FLAG_HIDE_ROUTE_118_GABBY_AND_TY_1
	return

GabbyAndTy_EventScript_HideAtRoute120_1::
	setflag FLAG_HIDE_ROUTE_120_GABBY_AND_TY_1
	return

GabbyAndTy_EventScript_ShowAtRoute120_1::
	clearflag FLAG_HIDE_ROUTE_120_GABBY_AND_TY_1
	return

GabbyAndTy_EventScript_HideAtRoute111_3::
	setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_3
	return

GabbyAndTy_EventScript_ShowAtRoute111_3::
	clearflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_3
	return

GabbyAndTy_EventScript_HideAtRoute118_2::
	setflag FLAG_HIDE_ROUTE_118_GABBY_AND_TY_2
	return

GabbyAndTy_EventScript_ShowAtRoute118_2::
	clearflag FLAG_HIDE_ROUTE_118_GABBY_AND_TY_2
	return

GabbyAndTy_EventScript_HideAtRoute120_2::
	setflag FLAG_HIDE_ROUTE_120_GABBY_AND_TY_2
	return

GabbyAndTy_EventScript_ShowAtRoute120_2::
	clearflag FLAG_HIDE_ROUTE_120_GABBY_AND_TY_2
	return

GabbyAndTy_EventScript_HideAtRoute111_2::
	setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_2
	return

GabbyAndTy_EventScript_ShowAtRoute111_2::
	clearflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_2
	return

GabbyAndTy_EventScript_HideAtRoute118_3::
	setflag FLAG_HIDE_ROUTE_118_GABBY_AND_TY_3
	return

GabbyAndTy_EventScript_ShowAtRoute118_3::
	clearflag FLAG_HIDE_ROUTE_118_GABBY_AND_TY_3
	return

GabbyAndTy_EventScript_GabbyBattle1::
	release
	end

GabbyAndTy_EventScript_TyBattle1::
	release
	end

GabbyAndTy_EventScript_GabbyBattle2::
	release
	end

GabbyAndTy_EventScript_TyBattle2::
	release
	end

GabbyAndTy_EventScript_GabbyBattle3::
	release
	end

GabbyAndTy_EventScript_TyBattle3::
	release
	end

GabbyAndTy_EventScript_GabbyBattle4::
	release
	end

GabbyAndTy_EventScript_TyBattle4::
	release
	end

GabbyAndTy_EventScript_GabbyBattle5::
	release
	end

GabbyAndTy_EventScript_TyBattle5::
	release
	end

GabbyAndTy_EventScript_GabbyBattle6::
	release
	end

GabbyAndTy_EventScript_TyBattle6::
	release
	end

GabbyAndTy_EventScript_FirstInterview::
	call_if_eq VAR_FACING, DIR_NORTH, GabbyAndTy_EventScript_FacePlayerNorth
	call_if_eq VAR_FACING, DIR_SOUTH, GabbyAndTy_EventScript_FacePlayerSouth
	call_if_eq VAR_FACING, DIR_EAST, GabbyAndTy_EventScript_FacePlayerEast
	goto_if_set FLAG_TEMP_SKIP_GABBY_INTERVIEW, GabbyAndTy_EventScript_KeepingAnEyeOutForYou
	goto GabbyAndTy_EventScript_Interview
	end

GabbyAndTy_EventScript_FacePlayerNorth::
	applymovement VAR_0x8004, GabbyAndTy_Movement_WalkInPlaceDown
	waitmovement 0
	return

GabbyAndTy_EventScript_FacePlayerSouth::
	applymovement VAR_0x8004, GabbyAndTy_Movement_WalkInPlaceUp
	applymovement VAR_0x8005, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	return

GabbyAndTy_EventScript_FacePlayerEast::
	applymovement VAR_0x8004, GabbyAndTy_Movement_WalkInPlaceLeft
	applymovement VAR_0x8005, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	return

GabbyAndTy_EventScript_RequestInterview::
	call_if_eq VAR_FACING, DIR_NORTH, GabbyAndTy_EventScript_FacePlayerNorth
	call_if_eq VAR_FACING, DIR_SOUTH, GabbyAndTy_EventScript_FacePlayerSouth
	call_if_eq VAR_FACING, DIR_EAST, GabbyAndTy_EventScript_FacePlayerEast
	goto_if_set FLAG_TEMP_SKIP_GABBY_INTERVIEW, GabbyAndTy_EventScript_KeepingAnEyeOutForYou
	goto_if_eq VAR_RESULT, 0, GabbyAndTy_EventScript_DidntInterviewLastTime
	switch VAR_RESULT
	case 0, GabbyAndTy_EventScript_RequestInterviewNoTrivia
	case 1, GabbyAndTy_EventScript_RequestInterviewShortBattle
	case 2, GabbyAndTy_EventScript_RequestInterviewThrewBall
	case 3, GabbyAndTy_EventScript_RequestInterviewUsedItems
	case 4, GabbyAndTy_EventScript_RequestInterviewLostAMon
	end

GabbyAndTy_Movement_WalkInPlaceDown:
	walk_in_place_down
	step_end

GabbyAndTy_Movement_WalkInPlaceUp:
	walk_in_place_up
	step_end

GabbyAndTy_Movement_WalkInPlaceLeft:
	walk_in_place_left
	step_end

GabbyAndTy_EventScript_DidntInterviewLastTime::
	goto GabbyAndTy_EventScript_Interview
	end

GabbyAndTy_EventScript_RequestInterviewNoTrivia::
	goto GabbyAndTy_EventScript_Interview
	end

GabbyAndTy_EventScript_RequestInterviewShortBattle::
	goto GabbyAndTy_EventScript_Interview
	end

GabbyAndTy_EventScript_RequestInterviewThrewBall::
	goto GabbyAndTy_EventScript_Interview
	end

GabbyAndTy_EventScript_RequestInterviewUsedItems::
	goto GabbyAndTy_EventScript_Interview
	end

GabbyAndTy_EventScript_RequestInterviewLostAMon::
	goto GabbyAndTy_EventScript_Interview
	end

GabbyAndTy_EventScript_Interview::
	goto_if_eq VAR_RESULT, NO, GabbyAndTy_EventScript_DontGiveUpKeepingEyeOut
	setvar VAR_0x8004, EASY_CHAT_TYPE_GABBY_AND_TY
	call Common_ShowEasyChatScreen
	lock
	faceplayer
	goto_if_eq VAR_RESULT, 0, GabbyAndTy_EventScript_DontGiveUpKeepingEyeOut
	setflag FLAG_TEMP_SKIP_GABBY_INTERVIEW
	release
	end

GabbyAndTy_EventScript_DontGiveUpKeepingEyeOut::
	setflag FLAG_TEMP_SKIP_GABBY_INTERVIEW
	release
	end

GabbyAndTy_EventScript_KeepingAnEyeOutForYou::
	release
	end
