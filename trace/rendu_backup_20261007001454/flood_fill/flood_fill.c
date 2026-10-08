int flood_fill_recursive(char **tab, t_point size, t_point cur_point, char zone_num)
{
    // no real base case, just keep checking and filling until zone filled   
    // set cardinal point to 'F' (filled)
    // get the t_point (coordinates) of 4 cardinal points stored in an array 
    for (each cardinal point coordinate)
    {
        if (point is within boundaries && point num matches zone_num)
        {
            flood_fill _recursive(tab, size, current_cardinal_point, zone_num);
        }
    }
    // backtracking just involves returning to the previous recursive call
}

void  flood_fill(char **tab, t_point size, t_point begin)
{
    // get the zone number of begin point (in the example is '1')
    flood_fill_recursive(tab, size, begin, zone_num);
}
