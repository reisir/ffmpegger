-- @author undefinist / www.undefinist.com
-- Add this after all incs!
function Run()
	if SELF:GetOption("Refreshed", "0") == "0" then
		SKIN:Bang("!WriteKeyValue", SELF:GetName(), "Refreshed", "1")
		SKIN:Bang("!Refresh")
	else
		SKIN:Bang("!WriteKeyValue", SELF:GetName(), "Refreshed", "0")
	end
end
