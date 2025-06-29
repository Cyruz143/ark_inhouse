class CfgMovesBasic;
class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        // Ladders
        class LadderCivilStatic;
        class LadderCivilUpLoop: LadderCivilStatic {
            speed = 1.575;
        };
        // Swimming
        class AswmPercMstpSnonWnonDnon;
        class AswmPercMrunSnonWnonDf: AswmPercMstpSnonWnonDnon {
            speed = 0.3575205;
        };
        class AsswPercMstpSnonWnonDnon;
        class AsswPercMrunSnonWnonDf: AsswPercMstpSnonWnonDnon {
            speed = 0.33575205;
        };
        class AbswPercMstpSnonWnonDnon;
        class AbswPercMrunSnonWnonDf: AbswPercMstpSnonWnonDnon {
            speed = 0.33575205;
        };
        class AdvePercMstpSnonWrflDnon;
        class AdvePercMrunSnonWrflDf: AdvePercMstpSnonWrflDnon {
            speed = 0.183621;
        };
        class AsdvPercMstpSnonWrflDnon;
        class AsdvPercMrunSnonWrflDf: AsdvPercMstpSnonWrflDnon {
            speed = 0.183621;
        };
        class AbdvPercMstpSnonWrflDnon;
        class AbdvPercMrunSnonWrflDf: AbdvPercMstpSnonWrflDnon {
            speed = 0.183621;
        };
    };
};
