import java.awt.Color;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.SwingConstants;
import java.awt.event.*;

public class Project_Calc implements ActionListener{

     public Project_Calc() {
          JFrame jf = new JFrame("Calculator");
          jf.setLayout(null);
          jf.setSize(600,600);
          jf.setLocation(600, 150);

          JLabel displayLabel = new JLabel("hello");
          displayLabel.setBounds(30, 50, 540, 40);
          displayLabel.setBackground(Color.LIGHT_GRAY);
          displayLabel.setOpaque(true);
          displayLabel.setHorizontalAlignment(SwingConstants.RIGHT);






          // button settings 

          JButton _7button=new JButton("7");
          _7button.setBounds(30,130,80,80);
          jf.add(_7button);

          JButton _8button=new JButton("8");
          _8button.setBounds(130,130,80,80);
          jf.add(_8button);

          JButton _9button=new JButton("9");
          _9button.setBounds(230,130,80,80);
          jf.add(_9button);






          JButton _4button=new JButton("4");
          _4button.setBounds(30,230,80,80);
          jf.add(_4button);

          JButton _5button=new JButton("5");
          _5button.setBounds(130,230,80,80);
          jf.add(_5button);

          JButton _6button=new JButton("6");
          _6button.setBounds(230,230,80,80);
          jf.add(_6button);






          JButton _1button=new JButton("1");
          _1button.setBounds(30,330,80,80);
          jf.add(_1button);

          JButton _2button=new JButton("2");
          _2button.setBounds(130,330,80,80);
          jf.add(_2button);

          JButton _3button=new JButton("3");
          _3button.setBounds(230,330,80,80);
          jf.add(_3button);


          JButton _dotbutton=new JButton(".");
          _dotbutton.setBounds(30,430,80,80);
          jf.add(_dotbutton);

          JButton _zerobutton=new JButton("0");
          _zerobutton.setBounds(130,430,80,80);
          jf.add(_zerobutton);

          JButton _equalbutton=new JButton("*");
          _equalbutton.setBounds(230,430,80,80);
          jf.add(_equalbutton);





          jf.add(displayLabel); 


          jf.setVisible(true);
          jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

     }




     public static void main(String[] args){
          new Project_Calc();
     }




@Override
public void actionPerformed(ActionEvent e) {
     
}

