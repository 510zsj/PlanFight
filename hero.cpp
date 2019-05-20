#include<hero.h>

hero::hero(){
    PicLocation = "";
    gg = true;
    my.Blod = 10000;
    my.Attac = 10;
    my.Speed = 5;
    my.level = 1;
}

void hero::move(int key){
    switch (char(key)) {
    case 'A':
    case 'a': if(Loc.plan.x() >= my.Speed)Loc.plan.setX(Loc.plan.x() - my.Speed); break;
    case 'D':
    case 'd': if(Loc.plan.x() + PLANSIZE + my.Speed <= GAMEWIGHT)Loc.plan.setX(Loc.plan.x() + my.Speed); break;
    case 'W':
    case 'w': if(Loc.plan.y() >= my.Speed)Loc.plan.setY(Loc.plan.y() - my.Speed); break;
    case 'S':
    case 's': if(Loc.plan.y() + PLANSIZE + my.Speed <= GAMEHIGHT)Loc.plan.setY(Loc.plan.y() + my.Speed); break;
    }
    Loc.plan.setWidth(PLANSIZE);
    Loc.plan.setHeight(PLANSIZE);
}
