class CfgFSMs {
    class ARK_Formation {
        class States {
            class Init {
                name = "Init";
                class Init {
                    function = "formationInit";
                    parameters[] = {};
                    thresholds[] = {{0, 0.5, 0.5}};
                };
                class Links {
                    class Always {
                        priority = 0;
                        to = "Start";
                        class Condition {
                            function = "true";
                            parameters[] = {};
                            threshold = 0;
                        };
                        class Action {
                            function = "nothing";
                            parameters[] = {};
                            thresholds[] = {};
                        };
                    };
                };
            };
            class Combat {
                name = "Combat";
                class Init {
                    function = "nothing";
                    parameters[] = {};
                    thresholds[] = {};
                };
                class Links {
                    class Leader_near_tgt {
                        priority = 1;
                        to = "Leader";
                        class Condition {
                            function = "formationIsLeader";
                            parameters[] = {};
                            threshold = 0;
                        };
                        class Action {
                            function = "nothing";
                            parameters[] = {};
                            thresholds[] = {};
                        };
                    };
                    class Always {
                        priority = 0;
                        to = "Search_path__Covering";
                        class Condition {
                            function = "true";
                            parameters[] = {};
                            threshold = 0;
                        };
                        class Action {
                            function = "nothing";
                            parameters[] = {};
                            thresholds[] = {};
                        };
                    };
                };
            };
            class Test_reload {
                name = "Test_reload";
                class Init {
                    function = "nothing";
                    parameters[] = {};
                    thresholds[] = {};
                };
                class Links {
                    class Reload {
                        priority = 3;
                        to = "Reload";
                        class Condition {
                            function = "reloadNeeded";
                            parameters[] = {};
                            threshold = 0;
                        };
                        class Action {
                            function = "nothing";
                            parameters[] = {};
                            thresholds[] = {};
                        };
                    };
                    class No_cover {
                        priority = 1;
                        to = "Start";
                        class Condition {
                            function = "true";
                            parameters[] = {};
                            threshold = 0;
                        };
                        class Action {
                            function = "nothing";
                            parameters[] = {};
                            thresholds[] = {};
                        };
                    };
                };
            };
            class Search_path__Covering {
                name = "Search_path__Covering";
                class Init {
                    function = "searchPath";
                    parameters[] = {10, 5};
                    thresholds[] = {};
                };
                class Links {
                    class Cover_reached {
                        priority = 4;
                        to = "Provide_cover__Out";
                        class Condition {
                            function = "coverReached";
                            parameters[] = {};
                            threshold = 0;
                        };
                        class Action {
                            function = "nothing";
                            parameters[] = {};
                            thresholds[] = {};
                        };
                    };
                    class No_cover {
                        priority = 1;
                        to = "Start";
                        class Condition {
                            function = "true";
                            parameters[] = {};
                            threshold = 0;
                        };
                        class Action {
                            function = "nothing";
                            parameters[] = {};
                            thresholds[] = {};
                        };
                    };
                };
            };
            class Next_target__Out {
                name = "Next_target__Out";
                class Init {
                    function = "formationNextTarget";
                    parameters[] = {};
                    thresholds[] = {};
                };
                class Links {
                    class Abort_Vehicle {
                        priority = 3;
                        to = "Clean_up";
                        class Condition {
                            function = "vehicle";
                            parameters[] = {};
                            threshold = 0;
                        };
                        class Action {
                            function = "nothing";
                            parameters[] = {};
                            thresholds[] = {};
                        };
                    };
                    class Abort_No_combat {
                        priority = 3;
                        to = "Clean_up";
                        class Condition {
                            function = "1-behaviourCombat";
                            parameters[] = {};
                            threshold = 0;
                        };
                        class Action {
                            function = "nothing";
                            parameters[] = {};
                            thresholds[] = {};
                        };
                    };
                    class Reload {
                        priority = 2;
                        to = "Reload__Hiden_";
                        class Condition {
                            function = "reloadNeeded";
                            parameters[] = {};
                            threshold = 0;
                        };
                        class Action {
                            function = "nothing";
                            parameters[] = {};
                            thresholds[] = {};
                        };
                    };
                    class Stop_covering {
                        priority = 1;
                        to = "Clean_up";
                        class Condition {
                            function = "formationCanLeaveCover";
                            parameters[] = {};
                            threshold = 0;
                        };
                        class Action {
                            function = "nothing";
                            parameters[] = {};
                            thresholds[] = {};
                        };
                    };
                    class Random_delay {
                        priority = 0;
                        to = "Hide_or_Out_";
                        class Condition {
                            function = "randomDelay";
                            parameters[] = {};
                            threshold = 0;
                        };
                        class Action {
                            function = "nothing";
                            parameters[] = {};
                            thresholds[] = {};
                        };
                    };
                };
            };
            class Start {
                name = "Start";
                class Init {
                    function = "nothing";
                    parameters[] = {};
                    thresholds[] = {};
                };
                class Links {
                    class Vehicle {
                        priority = 2;
                        to = "Excluded";
                        class Condition {
                            function = "vehicle";
                            parameters[] = {};
                            threshold = 0;
                        };
                        class Action {
                            function = "nothing";
                            parameters[] = {};
                            thresholds[] = {};
                        };
                    };
                    class Combat {
                        priority = 1;
                        to = "Combat";
                        class Condition {
                            function = "behaviourCombat";
                            parameters[] = {};
                            threshold = 0;
                        };
                        class Action {
                            function = "nothing";
                            parameters[] = {};
                            thresholds[] = {};
                        };
                    };
                    class No_combat {
                        priority = 0;
                        to = "Excluded";
                        class Condition {
                            function = "true";
                            parameters[] = {};
                            threshold = 0;
                        };
                        class Action {
                            function = "nothing";
                            parameters[] = {};
                            thresholds[] = {};
                        };
                    };
                };
            };
            class Provide_cover__Out {
                name = "Provide_cover__Out";
                class Init {
                    function = "formationProvideCover";
                    parameters[] = {};
                    thresholds[] = {};
                };
                class Links {
                    class Abort_Vehicle {
                        priority = 3;
                        to = "Clean_up";
                        class Condition {
                            function = "vehicle";
                            parameters[] = {};
                            threshold = 0;
                        };
                        class Action {
                            function = "nothing";
                            parameters[] = {};
                            thresholds[] = {};
                        };
                    };
                    class Abort_No_combat {
                        priority = 3;
                        to = "Clean_up";
                        class Condition {
                            function = "1-behaviourCombat";
                            parameters[] = {};
                            threshold = 0;
                        };
                        class Action {
                            function = "nothing";
                            parameters[] = {};
                            thresholds[] = {};
                        };
                    };
                    class Reload {
                        priority = 2;
                        to = "Reload__Hiden_";
                        class Condition {
                            function = "reloadNeeded";
                            parameters[] = {};
                            threshold = 0;
                        };
                        class Action {
                            function = "nothing";
                            parameters[] = {};
                            thresholds[] = {};
                        };
                    };
                    class Stop_covering {
                        priority = 1;
                        to = "Clean_up";
                        class Condition {
                            function = "formationCanLeaveCover";
                            parameters[] = {};
                            threshold = 0;
                        };
                        class Action {
                            function = "nothing";
                            parameters[] = {};
                            thresholds[] = {};
                        };
                    };
                    class Random_delay {
                        priority = 0;
                        to = "Hide_or_Out_";
                        class Condition {
                            function = "randomDelay";
                            parameters[] = {};
                            threshold = 0;
                        };
                        class Action {
                            function = "nothing";
                            parameters[] = {};
                            thresholds[] = {};
                        };
                    };
                };
            };
            class Clean_up {
                name = "Clean_up";
                class Init {
                    function = "formationCleanUp";
                    parameters[] = {};
                    thresholds[] = {};
                };
                class Links {
                    class Always {
                        priority = 0;
                        to = "Start";
                        class Condition {
                            function = "true";
                            parameters[] = {};
                            threshold = 0;
                        };
                        class Action {
                            function = "nothing";
                            parameters[] = {};
                            thresholds[] = {};
                        };
                    };
                };
            };
            class Leader {
                name = "Leader";
                class Init {
                    function = "formationLeader";
                    parameters[] = {};
                    thresholds[] = {};
                };
                class Links {
                    class Always {
                        priority = 0;
                        to = "Search_path__No";
                        class Condition {
                            function = "true";
                            parameters[] = {};
                            threshold = 0;
                        };
                        class Action {
                            function = "nothing";
                            parameters[] = {};
                            thresholds[] = {};
                        };
                    };
                };
            };
            class Search_path__No {
                name = "Search_path__No";
                class Init {
                    function = "searchPath";
                    parameters[] = {0, 0};
                    thresholds[] = {};
                };
                class Links {
                    class Cover_reached {
                        priority = 4;
                        to = "Provide_cover__Out";
                        class Condition {
                            function = "coverReached";
                            parameters[] = {};
                            threshold = 0;
                        };
                        class Action {
                            function = "nothing";
                            parameters[] = {};
                            thresholds[] = {};
                        };
                    };
                    class No_cover {
                        priority = 1;
                        to = "Test_reload";
                        class Condition {
                            function = "true";
                            parameters[] = {};
                            threshold = 0;
                        };
                        class Action {
                            function = "nothing";
                            parameters[] = {};
                            thresholds[] = {};
                        };
                    };
                };
            };
            /*class Drop_to_ground {
                name = "Drop_to_ground";
                class Init {
                    function = "setUnitPosToDown";
                    parameters[] = {};
                    thresholds[] = {};
                };
                class Links {
                    class Always {
                        priority = 0;
                        to = "Reload";
                        class Condition {
                            function = "true";
                            parameters[] = {};
                            threshold = 0;
                        };
                        class Action {
                            function = "nothing";
                            parameters[] = {};
                            thresholds[] = {};
                        };
                    };
                };
            };*/
            class Reload {
                name = "Reload";
                class Init {
                    function = "reload";
                    parameters[] = {};
                    thresholds[] = {};
                };
                class Links {
                    class No_cover {
                        priority = 1;
                        to = "Start";
                        class Condition {
                            function = "true";
                            parameters[] = {};
                            threshold = 0;
                        };
                        class Action {
                            function = "nothing";
                            parameters[] = {};
                            thresholds[] = {};
                        };
                    };
                };
            };
            class Excluded {
                name = "Excluded";
                class Init {
                    function = "formationExcluded";
                    parameters[] = {};
                    thresholds[] = {};
                };
                class Links {
                    class Always {
                        priority = 0;
                        to = "Search_path__No_1";
                        class Condition {
                            function = "true";
                            parameters[] = {};
                            threshold = 0;
                        };
                        class Action {
                            function = "nothing";
                            parameters[] = {};
                            thresholds[] = {};
                        };
                    };
                };
            };
            class Reload__Hiden_ {
                name = "Reload__Hiden_";
                class Init {
                    function = "reload";
                    parameters[] = {};
                    thresholds[] = {};
                };
                class Links {
                    class Always {
                        priority = 0;
                        to = "Provide_cover__Out";
                        class Condition {
                            function = "true";
                            parameters[] = {};
                            threshold = 0;
                        };
                        class Action {
                            function = "nothing";
                            parameters[] = {};
                            thresholds[] = {};
                        };
                    };
                };
            };
            class Search_path__No_1 {
                name = "Search_path__No_1";
                class Init {
                    function = "searchPath";
                    parameters[] = {0, 0};
                    thresholds[] = {};
                };
                class Links {
                    class Cover_reached {
                        priority = 4;
                        to = "Provide_cover__Out";
                        class Condition {
                            function = "coverReached";
                            parameters[] = {};
                            threshold = 0;
                        };
                        class Action {
                            function = "nothing";
                            parameters[] = {};
                            thresholds[] = {};
                        };
                    };
                    class No_cover {
                        priority = 1;
                        to = "Start";
                        class Condition {
                            function = "true";
                            parameters[] = {};
                            threshold = 0;
                        };
                        class Action {
                            function = "nothing";
                            parameters[] = {};
                            thresholds[] = {};
                        };
                    };
                };
            };
            class Hide_in_cover__Hidden {
                name = "Hide_in_cover__Hidden";
                class Init {
                    function = "formationHideInCover";
                    parameters[] = {};
                    thresholds[] = {};
                };
                class Links {
                    class Abort_Vehicle {
                        priority = 3;
                        to = "Clean_up";
                        class Condition {
                            function = "vehicle";
                            parameters[] = {};
                            threshold = 0;
                        };
                        class Action {
                            function = "nothing";
                            parameters[] = {};
                            thresholds[] = {};
                        };
                    };
                    class Abort_No_combat {
                        priority = 3;
                        to = "Clean_up";
                        class Condition {
                            function = "1-behaviourCombat";
                            parameters[] = {};
                            threshold = 0;
                        };
                        class Action {
                            function = "nothing";
                            parameters[] = {};
                            thresholds[] = {};
                        };
                    };
                    class Reload {
                        priority = 2;
                        to = "Reload__Hiden_";
                        class Condition {
                            function = "reloadNeeded";
                            parameters[] = {};
                            threshold = 0;
                        };
                        class Action {
                            function = "nothing";
                            parameters[] = {};
                            thresholds[] = {};
                        };
                    };
                    class Stop_covering {
                        priority = 1;
                        to = "Clean_up";
                        class Condition {
                            function = "formationCanLeaveCover";
                            parameters[] = {};
                            threshold = 0;
                        };
                        class Action {
                            function = "nothing";
                            parameters[] = {};
                            thresholds[] = {};
                        };
                    };
                    class Random_delay {
                        priority = 0;
                        to = "Hide_or_Out_";
                        class Condition {
                            function = "randomDelay";
                            parameters[] = {};
                            threshold = 0;
                        };
                        class Action {
                            function = "nothing";
                            parameters[] = {};
                            thresholds[] = {};
                        };
                    };
                };
            };
            class Hide_or_Out_ {
                name = "Hide_or_Out_";
                class Init {
                    function = "formationInit";
                    parameters[] = {};
                    thresholds[] = {{1, 0.2, 1.2}};
                };
                class Links {
                    class Random {
                        priority = 1;
                        to = "Next_target__Out";
                        class Condition {
                            function = "true";
                            parameters[] = {};
                            threshold = 1;
                        };
                        class Action {
                            function = "nothing";
                            parameters[] = {};
                            thresholds[] = {};
                        };
                    };
                    class Otherwise {
                        priority = 0;
                        to = "Hide_in_cover__Hidden";
                        class Condition {
                            function = "true";
                            parameters[] = {};
                            threshold = 0;
                        };
                        class Action {
                            function = "nothing";
                            parameters[] = {};
                            thresholds[] = {};
                        };
                    };
                };
            };
            /*class Drop_to_ground_1 {
                name = "Drop_to_ground_1";
                class Init {
                    function = "setUnitPosToDown";
                    parameters[] = {};
                    thresholds[] = {};
                };
                class Links {
                    class Always {
                        priority = 0;
                        to = "Reload__Hiden_";
                        class Condition {
                            function = "true";
                            parameters[] = {};
                            threshold = 0;
                        };
                        class Action {
                            function = "nothing";
                            parameters[] = {};
                            thresholds[] = {};
                        };
                    };
                };
            };*/
        };
        initState = "Init";
        finalStates[] = {};
    };
};