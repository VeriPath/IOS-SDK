import UIKit
import Veripath

class ViewController: UIViewController, VeripathViewDelegate {
    // This is how to tell if we've gotten their permisisons already.
    func getPermissions(json: String) {
        print("Done!  Here are the permissions: ")
        print(json)
        vView.isHidden = true
    }

    @IBOutlet var vView: VeripathView!
    
    // We put in an "update permissions" button, right here.
    @IBAction func update(_ sender: Any) {
        // This will show the VeriPath screen, even if they've already went through it successfully.
        vView.isHidden = false
        vView.update(b: true)
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        vView.delegate = self
        
        // Set the flags here on what to show & hide.
        vView.showDeviceData(show: true);
        vView.showLocation(show: true);
        vView.showMatchingData(show: true);
        vView.showMeasurement(show: true);
        vView.showStorage(show: true);
        vView.showPersonalization(show: true);
        vView.showAds(show: true);
        vView.showContent(show: true);
        
        // Set the 3rd party users of this data, if any.
        // If you comment this line out, it will just say "Internal" to the user, denoting you need this data internally.
        vView.setDataUsers(vendors: ["Google", "Facebook", "VenPath"]);
        
        // Showing the PayForPrivacy dialog
        vView.showPayForPrivacy(show: true);
        
        // How much are you going to charge if you can't use their data?
        vView.setPrivacyPrice(privacy: "$2.99 / month");
        
        // Set your colors
        vView.setPrimary(r: 211, g: 211, b: 211)
        vView.setDarkPrimary(r: 128, g: 128, b: 128)
        vView.setAccent(r: 135, g:206 , b: 250)
        
        /*
         This is how to launch the VeriPath Permission Screen
         on the launch of the app.  It will always show, until they
         select some type of permission opt-in.
         */
        vView.veripathSetup(sdkKey: "bosskey", publicKey: "lookatme", secretKey: "shhh")
        
        /*
         If you want to force the VeriPath Permission Screen
         to show on the next launch, even if it has been filled out,
         set showTime to a timestamp string for now.
         
         WARNING: DO NOT SET IT TO System.currentTimeMillis() !!!
         
         That will force the VeriPath Permission Screen to show on
         every-single-launch of the app.  Not good...
         */
        //vView.resetLaunch(developerValue: 2538052033)
    }
}
