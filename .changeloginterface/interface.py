import customtkinter

customtkinter.set_appearance_mode("Dark")
customtkinter.set_default_color_theme("blue")

root = customtkinter.CTk()
root.geometry("1200x1200")
root.title("Change Logs Interface")
root.resizable(True, True)
root.grid_rowconfigure((0,1,2), weight=1)
root.grid_columnconfigure((0,1,2), weight=1)

frame1 = customtkinter.CTkScrollableFrame(master=root)
frame1.grid(pady=0, padx=0, column=0, row=1, sticky="nsew")
frame2 = customtkinter.CTkScrollableFrame(master=root)
frame2.grid(pady=0, padx=0, column=1, row=1, sticky="nsew")
frame3 = customtkinter.CTkScrollableFrame(master=root)
frame3.grid(pady=0, padx=0, column=2, row=1, sticky="nsew")

label1 = customtkinter.CTkLabel(master=root, text="Custom Weapons & Attachments")
label1.grid(pady=12, padx=10, column=0, row=0)

customtkinter.CTkLabel(master=frame1, text="Added").grid(pady=12, padx=10, column=0, row=0)
weapon_Added = customtkinter.CTkTextbox(master=frame1, width=500, height=100)
weapon_Added.grid(pady=12, padx=10, column=0, row=1)
customtkinter.CTkLabel(master=frame1, text="Changes").grid(pady=12, padx=10, column=0, row=2)
weapon_Changes = customtkinter.CTkTextbox(master=frame1, width=500, height=100)
weapon_Changes.grid(pady=12, padx=10, column=0, row=3)
customtkinter.CTkLabel(master=frame1, text="Removed").grid(pady=12, padx=10, column=0, row=4)
weapon_Removed = customtkinter.CTkTextbox(master=frame1, width=500, height=100)
weapon_Removed.grid(pady=12, padx=10, column=0, row=5)

label2 = customtkinter.CTkLabel(master=root, text="Custom Gear")
label2.grid(pady=12, padx=10, column=1, row=0)

customtkinter.CTkLabel(master=frame2, text="Added").grid(pady=12, padx=10, column=0, row=0)
custom_Added = customtkinter.CTkTextbox(master=frame2, width=500, height=100)
custom_Added.grid(pady=12, padx=10, column=0, row=1)
customtkinter.CTkLabel(master=frame2, text="Changes").grid(pady=12, padx=10, column=0, row=2)
custom_Changes = customtkinter.CTkTextbox(master=frame2, width=500, height=100)
custom_Changes.grid(pady=12, padx=10, column=0, row=3)
customtkinter.CTkLabel(master=frame2, text="Removed").grid(pady=12, padx=10, column=0, row=4)
custom_Removed = customtkinter.CTkTextbox(master=frame2, width=500, height=100)
custom_Removed.grid(pady=12, padx=10, column=0, row=5)

label3 = customtkinter.CTkLabel(master=root, text="Custom Vehicles & Supplies")
label3.grid(pady=12, padx=10, column=2, row=0)

customtkinter.CTkLabel(master=frame3, text="Added").grid(pady=12, padx=10, column=0, row=0)
vehicle_Added = customtkinter.CTkTextbox(master=frame3, width=500, height=100)
vehicle_Added.grid(pady=12, padx=10, column=0, row=1)
customtkinter.CTkLabel(master=frame3, text="Changes").grid(pady=12, padx=10, column=0, row=2)
vehicle_Changes = customtkinter.CTkTextbox(master=frame3, width=500, height=100)
vehicle_Changes.grid(pady=12, padx=10, column=0, row=3)
customtkinter.CTkLabel(master=frame3, text="Removed").grid(pady=12, padx=10, column=0, row=4)
vehicle_Removed = customtkinter.CTkTextbox(master=frame3, width=500, height=100)
vehicle_Removed.grid(pady=12, padx=10, column=0, row=5)

save_button = customtkinter.CTkButton(master=root, text="Save", command=lambda: print("Changes saved!"))
save_button.grid(pady=12, padx=10, column=0, row=3, sticky="nsew", columnspan=3)

root.mainloop()