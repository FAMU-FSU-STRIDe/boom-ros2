function pauseSafe(odrv, PERIOD)

    cleanupObj = onCleanup(@() cleanMeUp(odrv));
    pause(PERIOD)
    
    function cleanMeUp(odrv)
        odrv.stopRecording()
        odrv.idle()
    end

end