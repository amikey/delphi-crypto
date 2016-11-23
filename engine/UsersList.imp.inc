{******************************************************************************}
{*  UsersList.imp.inc                                                         *}
{*  Revolutionary Confederation of Anarcho Syndicalists                       *}
{*  Written by: black.rabbit 2011                                             *}
{******************************************************************************}
function CreateUserNode : PUserNode;
begin
    Result := AllocMem ( SizeOf (TUserNode) );
    Result^.ID := 0;
    Result^.IDPic := 0;
    Result^.Login := '';
    Result^.Description := '';
    Result^.TimeStampCreate := 0.0;
    Result^.TimeStampModify := 0.0;
    Result^.TimeStampPublic := 0.0;
    Result^.KeyHash := '';
    Result^.DataHash := '';
end;

procedure FreeUserNode (aValue: PUserNode);
begin
    if Assigned (aValue) then
    try
        aValue^.ID := 0;
        aValue^.IDPic := 0;
        _FillChar ( aValue^.Login, Length (aValue^.Login), $00 );
        _FillChar ( aValue^.Description, Length (aValue^.Description), $00 );
        aValue^.TimeStampCreate := 0.0;
        aValue^.TimeStampModify := 0.0;
        aValue^.TimeStampPublic := 0.0;
        _FillChar ( aValue^.KeyHash, Length (aValue^.KeyHash), $00 );
        _FillChar ( aValue^.DataHash, Length (aValue^.DataHash), $00 );
    finally
        Dispose (aValue);
        aValue := NIL;
    end;
end;

procedure LoadUsersList (aTreeNodes: TTreeNodes; aParent: TTreeNode;
                         aDB: TSQLiteDatabase; anUserID: TID);
var


























                                   [ERR_USERS_LIST_CREATE,E.Message]);
    end;


function GetUserNodeID (const aValue: TTreeNode) : TID;
begin













                                   [ERR_USERS_LIST_GET_NODE_ID,E.Message]);
    end;


procedure UnLoadUsersList (aTreeNodes: TTreeNodes);
var
    I : Integer;
begin
    try
        SetTabStatus (tabUsers,tbsEmpty);
        if ( not Assigned (aTreeNodes) ) then
            raise Exception.Create (ERR_USERS_LIST_INCORRECT_NODES);
        for I := 0 to aTreeNodes.Count - 1 do
            FreeUserNode ( PUserNode (aTreeNodes [I].Data) );
        aTreeNodes.Clear;
    except on E: Exception do
        raise Exception.CreateFmt ('%s'#13#10'%s',
                                   [ERR_USERS_LIST_DELETE,E.Message]);
    end;
end;