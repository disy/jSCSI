/*
 * Copyright 2007 University of Konstanz
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * 
 * $Id: Idefix_Fetch_Stick.java 22 2007-04-25 09:17:58Z mkramis $
 * 
 */

package org.jscsi.whiskas.views;

import org.eclipse.swt.widgets.Composite;

public interface Idefix_Fetch_Stick 
{
	public Composite getComposite();
	public void getNewValues();
	public void setActive(boolean value);
}
