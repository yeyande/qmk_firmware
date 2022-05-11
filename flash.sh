while ! lsusb | grep -q 04d9:8008; do
        echo "Waiting for IAP"
        sleep 1
done
/home/kaleb/git/AnnePro2-Tools/target/release/annepro2_tools --boot /home/kaleb/git/annepro-qmk/annepro2_c15_kaleb.bin
