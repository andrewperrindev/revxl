function _standoff_extrude_4_outline_fn(){
    return CAG.circle({"center":[364.492681,-147.4156585],"radius":2.5})
.union(
    CAG.circle({"center":[364.492681,-65.4156585],"radius":2.5})
).union(
    CAG.circle({"center":[193.9373307,-113.2147568],"radius":2.5})
).union(
    CAG.circle({"center":[178.0968313,-113.2147568],"radius":2.5})
).union(
    CAG.circle({"center":[206.967081,-160.8386454],"radius":2.5})
).union(
    CAG.circle({"center":[165.067081,-160.8386454],"radius":2.5})
).union(
    CAG.circle({"center":[213.992681,-65.9156585],"radius":2.5})
).union(
    CAG.circle({"center":[157.992681,-65.9156585],"radius":2.5})
).union(
    CAG.circle({"center":[305.992681,-146.9156585],"radius":2.5})
).union(
    CAG.circle({"center":[305.992681,-65.9156585],"radius":2.5})
).union(
    CAG.circle({"center":[65.992681,-146.9156585],"radius":2.5})
).union(
    CAG.circle({"center":[65.992681,-65.9156585],"radius":2.5})
).extrude({ offset: [0, 0, 4] });
}


function _mounting_extrude_4_outline_fn(){
    return CAG.circle({"center":[364.492681,-147.4156585],"radius":1.5})
.union(
    CAG.circle({"center":[364.492681,-65.4156585],"radius":1.5})
).union(
    CAG.circle({"center":[193.9373307,-113.2147568],"radius":1.5})
).union(
    CAG.circle({"center":[178.0968313,-113.2147568],"radius":1.5})
).union(
    CAG.circle({"center":[206.967081,-160.8386454],"radius":1.5})
).union(
    CAG.circle({"center":[165.067081,-160.8386454],"radius":1.5})
).union(
    CAG.circle({"center":[213.992681,-65.9156585],"radius":1.5})
).union(
    CAG.circle({"center":[157.992681,-65.9156585],"radius":1.5})
).union(
    CAG.circle({"center":[305.992681,-146.9156585],"radius":1.5})
).union(
    CAG.circle({"center":[305.992681,-65.9156585],"radius":1.5})
).union(
    CAG.circle({"center":[65.992681,-146.9156585],"radius":1.5})
).union(
    CAG.circle({"center":[65.992681,-65.9156585],"radius":1.5})
).extrude({ offset: [0, 0, 4] });
}


function _xlboard_extrude_1_outline_fn(){
    return new CSG.Path2D([[62.492681,-60.9156585],[74.6604017,-60.9156585]]).appendArc([76.6091418,-59.3655607],{"radius":2,"clockwise":false,"large":false}).appendPoint([76.858999,-58.2833102]).appendArc([79.2576413,-56.7844723],{"radius":2,"clockwise":true,"large":false}).appendPoint([92.8988222,-59.9337871]).appendArc([95.2974644,-58.4349492],{"radius":2,"clockwise":false,"large":false}).appendPoint([95.3537022,-58.1913564]).appendArc([97.7523445,-56.6925185],{"radius":2,"clockwise":true,"large":false}).appendPoint([111.3935253,-59.8418332]).appendArc([113.7921675,-58.3429954],{"radius":2,"clockwise":false,"large":false}).appendPoint([113.8484053,-58.0994026]).appendArc([116.2470476,-56.6005647],{"radius":2,"clockwise":true,"large":false}).appendPoint([129.8882285,-59.7498795]).appendArc([132.2868707,-58.2510416],{"radius":2,"clockwise":false,"large":false}).appendPoint([132.3431085,-58.0074488]).appendArc([134.7417508,-56.5086109],{"radius":2,"clockwise":true,"large":false}).appendPoint([153.60874,-60.8643986]).appendArc([154.0586422,-60.9156585],{"radius":2,"clockwise":false,"large":false}).appendPoint([160.0682392,-60.9156585]).appendArc([162.0169793,-59.3655607],{"radius":2,"clockwise":false,"large":false}).appendPoint([163.9970447,-50.7889549]).appendArc([166.395687,-49.290117],{"radius":2,"clockwise":true,"large":false}).appendPoint([216.7514394,-60.9156585]).appendPoint([218.2033909,-60.9156585]).appendPoint([237.2924112,-56.5086109]).appendArc([239.6910535,-58.0074488],{"radius":2,"clockwise":true,"large":false}).appendPoint([239.7472913,-58.2510416]).appendArc([242.1459336,-59.7498795],{"radius":2,"clockwise":false,"large":false}).appendPoint([255.7871144,-56.6005647]).appendArc([258.1857567,-58.0994026],{"radius":2,"clockwise":true,"large":false}).appendPoint([258.2419945,-58.3429953]).appendArc([260.6406368,-59.8418333],{"radius":2,"clockwise":false,"large":false}).appendPoint([274.2818175,-56.6925185]).appendArc([276.6804598,-58.1913564],{"radius":2,"clockwise":true,"large":false}).appendPoint([276.7366976,-58.4349492]).appendArc([279.1353399,-59.9337871],{"radius":2,"clockwise":false,"large":false}).appendPoint([292.7765207,-56.7844723]).appendArc([295.175163,-58.2833102],{"radius":2,"clockwise":true,"large":false}).appendPoint([295.4250202,-59.3655607]).appendArc([297.3737603,-60.9156585],{"radius":2,"clockwise":false,"large":false}).appendPoint([369.492681,-60.9156585]).appendPoint([369.492681,-151.9156585]).appendPoint([269.992681,-151.9156585]).appendArc([267.992681,-153.9156585],{"radius":2,"clockwise":false,"large":false}).appendPoint([267.992681,-154.1656585]).appendArc([265.992681,-156.1656585],{"radius":2,"clockwise":true,"large":false}).appendPoint([251.992681,-156.1656585]).appendArc([249.992681,-158.1656585],{"radius":2,"clockwise":false,"large":false}).appendPoint([249.992681,-158.4156585]).appendArc([247.992681,-160.4156585],{"radius":2,"clockwise":true,"large":false}).appendPoint([229.7678552,-160.4156585]).appendArc([229.3179532,-160.4669183],{"radius":2,"clockwise":false,"large":false}).appendPoint([210.0136546,-164.9236669]).appendArc([209.10446,-165.4051455],{"radius":2,"clockwise":false,"large":false}).appendPoint([207.592218,-166.8059069]).appendArc([207.017081,-167.178593],{"radius":2,"clockwise":true,"large":false}).appendPoint([207.017081,-167.3386454]).appendPoint([165.017081,-167.3386454]).appendPoint([165.017081,-167.178593]).appendArc([164.441944,-166.8059069],{"radius":2,"clockwise":true,"large":false}).appendPoint([162.9297019,-165.4051455]).appendArc([162.0205075,-164.9236669],{"radius":2,"clockwise":false,"large":false}).appendPoint([142.716209,-160.4669184]).appendArc([142.2663068,-160.4156585],{"radius":2,"clockwise":false,"large":false}).appendPoint([124.041481,-160.4156585]).appendArc([122.041481,-158.4156585],{"radius":2,"clockwise":true,"large":false}).appendPoint([122.041481,-158.1656585]).appendArc([120.041481,-156.1656585],{"radius":2,"clockwise":false,"large":false}).appendPoint([106.041481,-156.1656585]).appendArc([104.041481,-154.1656585],{"radius":2,"clockwise":true,"large":false}).appendPoint([104.041481,-153.9156585]).appendArc([102.041481,-151.9156585],{"radius":2,"clockwise":false,"large":false}).appendPoint([62.492681,-151.9156585]).appendArc([60.492681,-149.9156585],{"radius":2,"clockwise":true,"large":false}).appendPoint([60.492681,-62.9156585]).appendArc([62.492681,-60.9156585],{"radius":2,"clockwise":true,"large":false}).close().innerToCAG()
.extrude({ offset: [0, 0, 1] });
}


function _xlboard_extrude_5_6_outline_fn(){
    return new CSG.Path2D([[62.492681,-60.9156585],[74.6604017,-60.9156585]]).appendArc([76.6091418,-59.3655607],{"radius":2,"clockwise":false,"large":false}).appendPoint([76.858999,-58.2833102]).appendArc([79.2576413,-56.7844723],{"radius":2,"clockwise":true,"large":false}).appendPoint([92.8988222,-59.9337871]).appendArc([95.2974644,-58.4349492],{"radius":2,"clockwise":false,"large":false}).appendPoint([95.3537022,-58.1913564]).appendArc([97.7523445,-56.6925185],{"radius":2,"clockwise":true,"large":false}).appendPoint([111.3935253,-59.8418332]).appendArc([113.7921675,-58.3429954],{"radius":2,"clockwise":false,"large":false}).appendPoint([113.8484053,-58.0994026]).appendArc([116.2470476,-56.6005647],{"radius":2,"clockwise":true,"large":false}).appendPoint([129.8882285,-59.7498795]).appendArc([132.2868707,-58.2510416],{"radius":2,"clockwise":false,"large":false}).appendPoint([132.3431085,-58.0074488]).appendArc([134.7417508,-56.5086109],{"radius":2,"clockwise":true,"large":false}).appendPoint([153.60874,-60.8643986]).appendArc([154.0586422,-60.9156585],{"radius":2,"clockwise":false,"large":false}).appendPoint([160.0682392,-60.9156585]).appendArc([162.0169793,-59.3655607],{"radius":2,"clockwise":false,"large":false}).appendPoint([163.9970447,-50.7889549]).appendArc([166.395687,-49.290117],{"radius":2,"clockwise":true,"large":false}).appendPoint([216.7514394,-60.9156585]).appendPoint([218.2033909,-60.9156585]).appendPoint([237.2924112,-56.5086109]).appendArc([239.6910535,-58.0074488],{"radius":2,"clockwise":true,"large":false}).appendPoint([239.7472913,-58.2510416]).appendArc([242.1459336,-59.7498795],{"radius":2,"clockwise":false,"large":false}).appendPoint([255.7871144,-56.6005647]).appendArc([258.1857567,-58.0994026],{"radius":2,"clockwise":true,"large":false}).appendPoint([258.2419945,-58.3429953]).appendArc([260.6406368,-59.8418333],{"radius":2,"clockwise":false,"large":false}).appendPoint([274.2818175,-56.6925185]).appendArc([276.6804598,-58.1913564],{"radius":2,"clockwise":true,"large":false}).appendPoint([276.7366976,-58.4349492]).appendArc([279.1353399,-59.9337871],{"radius":2,"clockwise":false,"large":false}).appendPoint([292.7765207,-56.7844723]).appendArc([295.175163,-58.2833102],{"radius":2,"clockwise":true,"large":false}).appendPoint([295.4250202,-59.3655607]).appendArc([297.3737603,-60.9156585],{"radius":2,"clockwise":false,"large":false}).appendPoint([369.492681,-60.9156585]).appendPoint([369.492681,-151.9156585]).appendPoint([269.992681,-151.9156585]).appendArc([267.992681,-153.9156585],{"radius":2,"clockwise":false,"large":false}).appendPoint([267.992681,-154.1656585]).appendArc([265.992681,-156.1656585],{"radius":2,"clockwise":true,"large":false}).appendPoint([251.992681,-156.1656585]).appendArc([249.992681,-158.1656585],{"radius":2,"clockwise":false,"large":false}).appendPoint([249.992681,-158.4156585]).appendArc([247.992681,-160.4156585],{"radius":2,"clockwise":true,"large":false}).appendPoint([229.7678552,-160.4156585]).appendArc([229.3179532,-160.4669183],{"radius":2,"clockwise":false,"large":false}).appendPoint([210.0136546,-164.9236669]).appendArc([209.10446,-165.4051455],{"radius":2,"clockwise":false,"large":false}).appendPoint([207.592218,-166.8059069]).appendArc([207.017081,-167.178593],{"radius":2,"clockwise":true,"large":false}).appendPoint([207.017081,-167.3386454]).appendPoint([165.017081,-167.3386454]).appendPoint([165.017081,-167.178593]).appendArc([164.441944,-166.8059069],{"radius":2,"clockwise":true,"large":false}).appendPoint([162.9297019,-165.4051455]).appendArc([162.0205075,-164.9236669],{"radius":2,"clockwise":false,"large":false}).appendPoint([142.716209,-160.4669184]).appendArc([142.2663068,-160.4156585],{"radius":2,"clockwise":false,"large":false}).appendPoint([124.041481,-160.4156585]).appendArc([122.041481,-158.4156585],{"radius":2,"clockwise":true,"large":false}).appendPoint([122.041481,-158.1656585]).appendArc([120.041481,-156.1656585],{"radius":2,"clockwise":false,"large":false}).appendPoint([106.041481,-156.1656585]).appendArc([104.041481,-154.1656585],{"radius":2,"clockwise":true,"large":false}).appendPoint([104.041481,-153.9156585]).appendArc([102.041481,-151.9156585],{"radius":2,"clockwise":false,"large":false}).appendPoint([62.492681,-151.9156585]).appendArc([60.492681,-149.9156585],{"radius":2,"clockwise":true,"large":false}).appendPoint([60.492681,-62.9156585]).appendArc([62.492681,-60.9156585],{"radius":2,"clockwise":true,"large":false}).close().innerToCAG()
.extrude({ offset: [0, 0, 5.6] });
}


function _board_extrude_5_6_outline_fn(){
    return new CSG.Path2D([[64.992681,-62.9156585],[76.2512736,-62.9156585]]).appendArc([78.2000137,-61.3655607],{"radius":2,"clockwise":false,"large":false}).appendPoint([78.3578371,-60.6819524]).appendArc([80.7564794,-59.1831145],{"radius":2,"clockwise":true,"large":false}).appendPoint([94.3976602,-62.3324293]).appendArc([96.7963025,-60.8335914],{"radius":2,"clockwise":false,"large":false}).appendPoint([96.8525403,-60.5899986]).appendArc([99.2511826,-59.0911607],{"radius":2,"clockwise":true,"large":false}).appendPoint([112.8923633,-62.2404755]).appendArc([115.2910056,-60.7416376],{"radius":2,"clockwise":false,"large":false}).appendPoint([115.3472434,-60.4980448]).appendArc([117.7458857,-58.9992069],{"radius":2,"clockwise":true,"large":false}).appendPoint([131.3870665,-62.1485217]).appendArc([133.7857088,-60.6496838],{"radius":2,"clockwise":false,"large":false}).appendPoint([133.8419466,-60.406091]).appendArc([136.2405889,-58.9072531],{"radius":2,"clockwise":true,"large":false}).appendPoint([153.3808689,-62.8643986]).appendArc([153.8307711,-62.9156585],{"radius":2,"clockwise":false,"large":false}).appendPoint([161.4545469,-62.9156585]).appendArc([163.4032871,-61.3655605],{"radius":2,"clockwise":false,"large":false}).appendPoint([165.2453017,-53.3869184]).appendArc([167.643944,-51.8880803],{"radius":2,"clockwise":true,"large":false}).appendPoint([215.3880771,-62.910682]).appendPoint([215.3869282,-62.9156585]).appendPoint([218.2033909,-62.9156585]).appendArc([218.6532931,-62.8643986],{"radius":2,"clockwise":false,"large":false}).appendPoint([235.7935731,-58.9072531]).appendArc([238.1922154,-60.406091],{"radius":2,"clockwise":true,"large":false}).appendPoint([238.2484532,-60.6496838]).appendArc([240.6470955,-62.1485217],{"radius":2,"clockwise":false,"large":false}).appendPoint([254.2882763,-58.9992069]).appendArc([256.6869186,-60.4980448],{"radius":2,"clockwise":true,"large":false}).appendPoint([256.7431564,-60.7416375]).appendArc([259.1417987,-62.2404755],{"radius":2,"clockwise":false,"large":false}).appendPoint([272.7829794,-59.0911607]).appendArc([275.1816217,-60.5899986],{"radius":2,"clockwise":true,"large":false}).appendPoint([275.2378595,-60.8335914]).appendArc([277.6365018,-62.3324293],{"radius":2,"clockwise":false,"large":false}).appendPoint([291.2776826,-59.1831145]).appendArc([293.6763249,-60.6819524],{"radius":2,"clockwise":true,"large":false}).appendPoint([293.8341483,-61.3655607]).appendArc([295.7828884,-62.9156585],{"radius":2,"clockwise":false,"large":false}).appendPoint([306.992681,-62.9156585]).appendArc([308.992681,-64.9156585],{"radius":2,"clockwise":true,"large":false}).appendPoint([308.992681,-81.6358147]).appendArc([310.992681,-81.6358147],{"radius":1.05,"clockwise":false,"large":false}).appendPoint([310.992681,-64.9156585]).appendArc([312.992681,-62.9156585],{"radius":2,"clockwise":true,"large":false}).appendPoint([364.992681,-62.9156585]).appendArc([366.992681,-64.9156585],{"radius":2,"clockwise":true,"large":false}).appendPoint([366.992681,-147.9156585]).appendArc([364.992681,-149.9156585],{"radius":2,"clockwise":true,"large":false}).appendPoint([312.992681,-149.9156585]).appendArc([310.992681,-147.9156585],{"radius":2,"clockwise":true,"large":false}).appendPoint([310.992681,-131.1955023]).appendArc([308.992681,-131.1955023],{"radius":1.05,"clockwise":false,"large":false}).appendPoint([308.992681,-147.9156585]).appendArc([306.992681,-149.9156585],{"radius":2,"clockwise":true,"large":false}).appendPoint([267.992681,-149.9156585]).appendArc([265.992681,-151.9156585],{"radius":2,"clockwise":false,"large":false}).appendPoint([265.992681,-152.1656585]).appendArc([263.992681,-154.1656585],{"radius":2,"clockwise":true,"large":false}).appendPoint([249.992681,-154.1656585]).appendArc([247.992681,-156.1656585],{"radius":2,"clockwise":false,"large":false}).appendPoint([247.992681,-156.4156585]).appendArc([245.992681,-158.4156585],{"radius":2,"clockwise":true,"large":false}).appendPoint([228.4909276,-158.4156585]).appendPoint([228.532482,-158.5956505]).appendPoint([209.3210729,-163.0309538]).appendArc([208.7976361,-163.2325215],{"radius":2,"clockwise":false,"large":false}).appendPoint([205.4709141,-165.0858178]).appendArc([204.4975751,-165.3386454],{"radius":2,"clockwise":true,"large":false}).appendPoint([167.5365869,-165.3386454]).appendArc([166.5632479,-165.0858178],{"radius":2,"clockwise":true,"large":false}).appendPoint([163.2365259,-163.2325215]).appendArc([162.7130891,-163.0309538],{"radius":2,"clockwise":false,"large":false}).appendPoint([143.50168,-158.5956505]).appendPoint([143.5432344,-158.4156585]).appendPoint([126.041481,-158.4156585]).appendArc([124.041481,-156.4156585],{"radius":2,"clockwise":true,"large":false}).appendPoint([124.041481,-156.1656585]).appendArc([122.041481,-154.1656585],{"radius":2,"clockwise":false,"large":false}).appendPoint([108.041481,-154.1656585]).appendArc([106.041481,-152.1656585],{"radius":2,"clockwise":true,"large":false}).appendPoint([106.041481,-151.9156585]).appendArc([104.041481,-149.9156585],{"radius":2,"clockwise":false,"large":false}).appendPoint([64.992681,-149.9156585]).appendArc([62.992681,-147.9156585],{"radius":2,"clockwise":true,"large":false}).appendPoint([62.992681,-64.9156585]).appendArc([64.992681,-62.9156585],{"radius":2,"clockwise":true,"large":false}).close().innerToCAG()
.subtract(
    new CSG.Path2D([[308.992681,-97.1955023],[308.992681,-115.6358147]]).appendArc([310.992681,-115.6358147],{"radius":1.05,"clockwise":false,"large":false}).appendPoint([310.992681,-97.1955023]).appendArc([308.992681,-97.1955023],{"radius":1.05,"clockwise":false,"large":false}).close().innerToCAG()
).extrude({ offset: [0, 0, 5.6] });
}




                function _standoffs_case_fn() {
                    

                // creating part 0 of case _standoffs
                let _standoffs__part_0 = _standoff_extrude_4_outline_fn();

                // make sure that rotations are relative
                let _standoffs__part_0_bounds = _standoffs__part_0.getBounds();
                let _standoffs__part_0_x = _standoffs__part_0_bounds[0].x + (_standoffs__part_0_bounds[1].x - _standoffs__part_0_bounds[0].x) / 2
                let _standoffs__part_0_y = _standoffs__part_0_bounds[0].y + (_standoffs__part_0_bounds[1].y - _standoffs__part_0_bounds[0].y) / 2
                _standoffs__part_0 = translate([-_standoffs__part_0_x, -_standoffs__part_0_y, 0], _standoffs__part_0);
                _standoffs__part_0 = rotate([0,0,0], _standoffs__part_0);
                _standoffs__part_0 = translate([_standoffs__part_0_x, _standoffs__part_0_y, 0], _standoffs__part_0);

                _standoffs__part_0 = translate([0,0,0], _standoffs__part_0);
                let result = _standoffs__part_0;
                
            
                    return result;
                }
            
            

                function _holes_case_fn() {
                    

                // creating part 0 of case _holes
                let _holes__part_0 = _mounting_extrude_4_outline_fn();

                // make sure that rotations are relative
                let _holes__part_0_bounds = _holes__part_0.getBounds();
                let _holes__part_0_x = _holes__part_0_bounds[0].x + (_holes__part_0_bounds[1].x - _holes__part_0_bounds[0].x) / 2
                let _holes__part_0_y = _holes__part_0_bounds[0].y + (_holes__part_0_bounds[1].y - _holes__part_0_bounds[0].y) / 2
                _holes__part_0 = translate([-_holes__part_0_x, -_holes__part_0_y, 0], _holes__part_0);
                _holes__part_0 = rotate([0,0,0], _holes__part_0);
                _holes__part_0 = translate([_holes__part_0_x, _holes__part_0_y, 0], _holes__part_0);

                _holes__part_0 = translate([0,0,0], _holes__part_0);
                let result = _holes__part_0;
                
            
                    return result;
                }
            
            

                function _xlBottom_case_fn() {
                    

                // creating part 0 of case _xlBottom
                let _xlBottom__part_0 = _xlboard_extrude_1_outline_fn();

                // make sure that rotations are relative
                let _xlBottom__part_0_bounds = _xlBottom__part_0.getBounds();
                let _xlBottom__part_0_x = _xlBottom__part_0_bounds[0].x + (_xlBottom__part_0_bounds[1].x - _xlBottom__part_0_bounds[0].x) / 2
                let _xlBottom__part_0_y = _xlBottom__part_0_bounds[0].y + (_xlBottom__part_0_bounds[1].y - _xlBottom__part_0_bounds[0].y) / 2
                _xlBottom__part_0 = translate([-_xlBottom__part_0_x, -_xlBottom__part_0_y, 0], _xlBottom__part_0);
                _xlBottom__part_0 = rotate([0,0,0], _xlBottom__part_0);
                _xlBottom__part_0 = translate([_xlBottom__part_0_x, _xlBottom__part_0_y, 0], _xlBottom__part_0);

                _xlBottom__part_0 = translate([0,0,0], _xlBottom__part_0);
                let result = _xlBottom__part_0;
                
            
                    return result;
                }
            
            

                function _wall_case_fn() {
                    

                // creating part 0 of case _wall
                let _wall__part_0 = _outerWall_case_fn();

                // make sure that rotations are relative
                let _wall__part_0_bounds = _wall__part_0.getBounds();
                let _wall__part_0_x = _wall__part_0_bounds[0].x + (_wall__part_0_bounds[1].x - _wall__part_0_bounds[0].x) / 2
                let _wall__part_0_y = _wall__part_0_bounds[0].y + (_wall__part_0_bounds[1].y - _wall__part_0_bounds[0].y) / 2
                _wall__part_0 = translate([-_wall__part_0_x, -_wall__part_0_y, 0], _wall__part_0);
                _wall__part_0 = rotate([0,0,0], _wall__part_0);
                _wall__part_0 = translate([_wall__part_0_x, _wall__part_0_y, 0], _wall__part_0);

                _wall__part_0 = translate([0,0,0], _wall__part_0);
                let result = _wall__part_0;
                
            

                // creating part 1 of case _wall
                let _wall__part_1 = _innerWall_case_fn();

                // make sure that rotations are relative
                let _wall__part_1_bounds = _wall__part_1.getBounds();
                let _wall__part_1_x = _wall__part_1_bounds[0].x + (_wall__part_1_bounds[1].x - _wall__part_1_bounds[0].x) / 2
                let _wall__part_1_y = _wall__part_1_bounds[0].y + (_wall__part_1_bounds[1].y - _wall__part_1_bounds[0].y) / 2
                _wall__part_1 = translate([-_wall__part_1_x, -_wall__part_1_y, 0], _wall__part_1);
                _wall__part_1 = rotate([0,0,0], _wall__part_1);
                _wall__part_1 = translate([_wall__part_1_x, _wall__part_1_y, 0], _wall__part_1);

                _wall__part_1 = translate([0,0,0], _wall__part_1);
                result = result.subtract(_wall__part_1);
                
            
                    return result;
                }
            
            

                function _outerWall_case_fn() {
                    

                // creating part 0 of case _outerWall
                let _outerWall__part_0 = _xlboard_extrude_5_6_outline_fn();

                // make sure that rotations are relative
                let _outerWall__part_0_bounds = _outerWall__part_0.getBounds();
                let _outerWall__part_0_x = _outerWall__part_0_bounds[0].x + (_outerWall__part_0_bounds[1].x - _outerWall__part_0_bounds[0].x) / 2
                let _outerWall__part_0_y = _outerWall__part_0_bounds[0].y + (_outerWall__part_0_bounds[1].y - _outerWall__part_0_bounds[0].y) / 2
                _outerWall__part_0 = translate([-_outerWall__part_0_x, -_outerWall__part_0_y, 0], _outerWall__part_0);
                _outerWall__part_0 = rotate([0,0,0], _outerWall__part_0);
                _outerWall__part_0 = translate([_outerWall__part_0_x, _outerWall__part_0_y, 0], _outerWall__part_0);

                _outerWall__part_0 = translate([0,0,0], _outerWall__part_0);
                let result = _outerWall__part_0;
                
            
                    return result;
                }
            
            

                function _innerWall_case_fn() {
                    

                // creating part 0 of case _innerWall
                let _innerWall__part_0 = _board_extrude_5_6_outline_fn();

                // make sure that rotations are relative
                let _innerWall__part_0_bounds = _innerWall__part_0.getBounds();
                let _innerWall__part_0_x = _innerWall__part_0_bounds[0].x + (_innerWall__part_0_bounds[1].x - _innerWall__part_0_bounds[0].x) / 2
                let _innerWall__part_0_y = _innerWall__part_0_bounds[0].y + (_innerWall__part_0_bounds[1].y - _innerWall__part_0_bounds[0].y) / 2
                _innerWall__part_0 = translate([-_innerWall__part_0_x, -_innerWall__part_0_y, 0], _innerWall__part_0);
                _innerWall__part_0 = rotate([0,0,0], _innerWall__part_0);
                _innerWall__part_0 = translate([_innerWall__part_0_x, _innerWall__part_0_y, 0], _innerWall__part_0);

                _innerWall__part_0 = translate([0,0,0], _innerWall__part_0);
                let result = _innerWall__part_0;
                
            
                    return result;
                }
            
            

                function case_case_fn() {
                    

                // creating part 0 of case case
                let case__part_0 = _standoffs_case_fn();

                // make sure that rotations are relative
                let case__part_0_bounds = case__part_0.getBounds();
                let case__part_0_x = case__part_0_bounds[0].x + (case__part_0_bounds[1].x - case__part_0_bounds[0].x) / 2
                let case__part_0_y = case__part_0_bounds[0].y + (case__part_0_bounds[1].y - case__part_0_bounds[0].y) / 2
                case__part_0 = translate([-case__part_0_x, -case__part_0_y, 0], case__part_0);
                case__part_0 = rotate([0,0,0], case__part_0);
                case__part_0 = translate([case__part_0_x, case__part_0_y, 0], case__part_0);

                case__part_0 = translate([0,0,0], case__part_0);
                let result = case__part_0;
                
            

                // creating part 1 of case case
                let case__part_1 = _holes_case_fn();

                // make sure that rotations are relative
                let case__part_1_bounds = case__part_1.getBounds();
                let case__part_1_x = case__part_1_bounds[0].x + (case__part_1_bounds[1].x - case__part_1_bounds[0].x) / 2
                let case__part_1_y = case__part_1_bounds[0].y + (case__part_1_bounds[1].y - case__part_1_bounds[0].y) / 2
                case__part_1 = translate([-case__part_1_x, -case__part_1_y, 0], case__part_1);
                case__part_1 = rotate([0,0,0], case__part_1);
                case__part_1 = translate([case__part_1_x, case__part_1_y, 0], case__part_1);

                case__part_1 = translate([0,0,0], case__part_1);
                result = result.subtract(case__part_1);
                
            

                // creating part 2 of case case
                let case__part_2 = _xlBottom_case_fn();

                // make sure that rotations are relative
                let case__part_2_bounds = case__part_2.getBounds();
                let case__part_2_x = case__part_2_bounds[0].x + (case__part_2_bounds[1].x - case__part_2_bounds[0].x) / 2
                let case__part_2_y = case__part_2_bounds[0].y + (case__part_2_bounds[1].y - case__part_2_bounds[0].y) / 2
                case__part_2 = translate([-case__part_2_x, -case__part_2_y, 0], case__part_2);
                case__part_2 = rotate([0,0,0], case__part_2);
                case__part_2 = translate([case__part_2_x, case__part_2_y, 0], case__part_2);

                case__part_2 = translate([0,0,0], case__part_2);
                result = result.union(case__part_2);
                
            

                // creating part 3 of case case
                let case__part_3 = _wall_case_fn();

                // make sure that rotations are relative
                let case__part_3_bounds = case__part_3.getBounds();
                let case__part_3_x = case__part_3_bounds[0].x + (case__part_3_bounds[1].x - case__part_3_bounds[0].x) / 2
                let case__part_3_y = case__part_3_bounds[0].y + (case__part_3_bounds[1].y - case__part_3_bounds[0].y) / 2
                case__part_3 = translate([-case__part_3_x, -case__part_3_y, 0], case__part_3);
                case__part_3 = rotate([0,0,0], case__part_3);
                case__part_3 = translate([case__part_3_x, case__part_3_y, 0], case__part_3);

                case__part_3 = translate([0,0,0], case__part_3);
                result = result.union(case__part_3);
                
            
                    return result;
                }
            
            
        
            function main() {
                return case_case_fn();
            }

        