import React from 'react'
import "../css/home.css";
import { useState } from 'react';

const Form = () => {

        const [formData, setFormData] = useState({
            firstname: '',
            lastname: '',
            email: '',
            password: '',
            cpassword: '',
            agree:false
        });
        const [checked, setChecked] = useState(false);
        
        const handleChange = (e)=>{
            setFormData({ ...formData,[e.target.name]: e.target.value} )
            setChecked(!checked)
        }
    
        const handleForm = (e) => {
            e.preventDefault()
            console.log(formData);
        };

  return (
    <div className='card '>
        <h3 className='text-center my-2'>Registration Form</h3>
        <form >
        <div className='row'>
        <div class="form-floating mb-3 col-md-6">
            <input type="text" class="form-control" name='firstname' id="firstname" placeholder="John"
            value={formData.firstname}
            onChange={handleChange}/>
            <label for="firstname">First Name</label>
        </div>
        <div class="form-floating mb-3 col-md-6">
            <input type="text" class="form-control" name='lastname' id="lastname" placeholder="Woo" 
            value={formData.lastname}
            onChange={handleChange}/>
            <label for="lastname">Last Name</label>
        </div>
        </div>
        <div class="form-floating mb-3">
            <input type="email" class="form-control" name='email' id="email" placeholder="name@example.com" 
            value={formData.email}
            onChange={handleChange}/>
            <label for="email">Email address</label>
        </div>
        <div class="form-floating mb-3">
            <input type="password" class="form-control" name='password' id="password" placeholder="Password" 
            value={formData.password}
            onChange={handleChange}/>
            <label for="password">Password</label>
        </div>
        <div class="form-floating mb-3">
            <input type="password" class="form-control"  name='cpassword' id="cpassword" placeholder="Confirm Password"
            value={formData.cpassword}
            onChange={handleChange}/>
            <label for="cpassword">Confirm Password</label>
        </div>
        <div class="mb-3 form-check">
            <input type="checkbox" class="form-check-input" name="agree" id="agree" 
            value={checked}
            onChange={handleChange}/>
            <label class="form-check-label" for="agree">I Agree for all the conditions</label>
        </div>
        <div className='text-center'>
            <button type="submit" onClick={handleForm} class="btn btn-primary">Submit</button>
        </div>
</form>
    </div>
  )
}

export default Form