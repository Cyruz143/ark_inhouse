const series = {
        fps: {
            label: "FPS",
            maxValue: 125,
            color: "#F78900"
        },
        fpsMin: {
            label: "FPS Min",
            maxValue: 125,
            color: "#800000"
        },
        cps: {
            label: "CPS",
            maxValue: 125,
            color: "#E5E500"
        },
        playerCount: {
            label: "Players",
            maxValue: 400,
            color: "#3EB2F2"
        },
        totalAiCount: {
            label: "Total AI",
            maxValue: 1000,
            color: "#8ECFFF"
        },
        activeAiCount: {
            label: "Active AI",
            maxValue: 1000,
            color: "#C9E3FF"
        },
        entityCount: {
            label: "Entities",
            maxValue: 1000,
            color: "#03CC20"
        }
    };
const seriesAxes = Object.getOwnPropertyNames(series);

module.exports = {
    seriesAxes: seriesAxes,
    series: series,
    graph: {
        margin: { top: 20, right: 20, bottom: 0, left: 20 },
        xLengthInSeconds: 20 * 60,
        width: 700,
        height: 260
    }
}