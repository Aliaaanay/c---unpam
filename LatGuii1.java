package Tugas;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class LatGuii1 {
    public static void main(String[] args) {
        JFrame frame = new JFrame("Form Biodata Mahasiswa");
        frame.setSize(400, 400); // Ukuran jendela lebih kecil
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLayout(new GridLayout(9, 2, 5, 5)); // Mengurangi jarak antar komponen

        JLabel nameLabel = new JLabel("Nama:");
        JTextField nameField = new JTextField();
        JLabel nimLabel = new JLabel("NIM:");
        JTextField nimField = new JTextField();
        JLabel ttlLabel = new JLabel("Tempat Tanggal Lahir:");
        JTextField ttlField = new JTextField();
        JLabel alamatLabel = new JLabel("Alamat:");
        JTextField alamatField = new JTextField();
        JLabel prodiLabel = new JLabel("Program Studi:");
        JTextField prodiField = new JTextField();
        JLabel hobiLabel = new JLabel("Hobi:");
        JTextField hobiField = new JTextField();
        JLabel semesterLabel = new JLabel("Semester:");
        JTextField semesterField = new JTextField();

        JButton prosesButton = new JButton("Proses");

        JTextArea outputArea = new JTextArea();
        outputArea.setEditable(false);
        outputArea.setLineWrap(true);
        outputArea.setWrapStyleWord(true);
        JScrollPane scrollPane = new JScrollPane(outputArea);
        scrollPane.setPreferredSize(new Dimension(250, 70)); // Ukuran scroll pane lebih kecil

        // Menambahkan komponen ke frame
        frame.add(nameLabel);
        frame.add(nameField);
        frame.add(nimLabel);
        frame.add(nimField);
        frame.add(ttlLabel);
        frame.add(ttlField);
        frame.add(alamatLabel);
        frame.add(alamatField);
        frame.add(prodiLabel);
        frame.add(prodiField);
        frame.add(hobiLabel);
        frame.add(hobiField);
        frame.add(semesterLabel);
        frame.add(semesterField);
        frame.add(prosesButton);
        frame.add(new JLabel()); // Placeholder
        frame.add(new JLabel("Output:"));
        frame.add(scrollPane);

        // Menampilkan frame
        frame.setVisible(true);

        // Menambahkan ActionListener untuk tombol Proses
        prosesButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent evt) {
                String name = nameField.getText();
                String nim = nimField.getText();
                String ttl = ttlField.getText();
                String alamat = alamatField.getText();
                String prodi = prodiField.getText();
                String hobi = hobiField.getText();
                String semester = semesterField.getText();

                String output = "Nama: " + name + "\n" +
                        "NIM: " + nim + "\n" +
                        "Tempat Tanggal Lahir: " + ttl + "\n" +
                        "Alamat: " + alamat + "\n" +
                        "Program Studi: " + prodi + "\n" +
                        "Hobi: " + hobi + "\n" +
                        "Semester: " + semester;

                outputArea.setText(output);
            }
        });
    }
}